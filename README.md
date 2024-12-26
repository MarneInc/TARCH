# *TARCH - Thorium Architecture*
## *Introduction*

*TARCH is a simple 16-bit CPU simulator made in the C programming language. Its machine instructions are represented in decimal numbers.*

## *Registers*

*TARCH contains 16 general purpose registers named from 0 to 15. It also contains 5 special registers, namely:*

*`pc`: Responsible for storing the next memory address to be executed.*

*`opcode`: Stores the number of the instruction being executed.*

*`arg1`, `arg2`, and `arg3`: Store the arguments of the instruction being executed.*

## *Flags*

*TARCH contains 6 flags, which are responsible for storing the results of the last comparison between registers, namely:*

*`le`: last equal*

*`ld`: last different*

*`lg`: last greater than*

*`ll`: last less than*

*`lge`: last greater than or equal to*

*`lle`: last less than or equal to*

*The value of these flags starts at **0**. When a comparison is made between **2** registers, all possible comparisons are made. If a comparison is true, it updates its corresponding flag to the value **1**. Otherwise, it remains at **0**.*

## *Central Control Unit*

*The central control unit (CCU) is what defines what the cpu has to do. It decodes the instructions, executes it, and looks for the next instruction to be executed. All of this happens in the following flow:*
*CPU turns on;*
*CCU decodes the entire code and places each token in RAM;*
*CCU creates an instruction from 4 ram addresses according to the `pc` register, and then readjusts its value, and stores the value of the addresses in the `opcode`, `arg1`, `arg2` and `arg3` registers respectively;*
*CCU executes the instruction by reading the `opcode` registers and their arguments.*

## *RAM*

*TARCH, as it is 16 bits, can only have 64 KB of RAM, totaling 65536 memory addresses. From address 0 to 55534 the instructions that the CPU executes are stored, and from address 55535 to 65535 the data that the user allocates is stored, for example loading a number into a register, and moving it to some memory address.*

## *Instruction Set*

*TARCH contains 23 usable instructions, separated into 4 different categories. The following table presents the name of each instruction, its opcode, and the necessary arguments, see:*

| Name  | Operation Code | Argument 1 | Argument 2 | Argument 3 |
|-------|----------------|------------|------------|------------|
| ADD   | 1              | reg1       | reg2       | reg3       |
| SUB   | 2              | reg1       | reg2       | reg3       |
| MUL   | 3              | reg1       | reg2       | reg3       |
| DIV   | 4              | reg1       | reg2       | reg3       |
| AND   | 5              | reg1       | reg2       | reg3       |
| OR    | 6              | reg1       | reg2       | reg3       |
| XOR   | 7              | reg1       | reg2       | reg3       |
| NOT   | 8              | reg1       | reg2       | -          |
| LOAD  | 9              | reg        | addr       | -          |
| STORE | 10             | addr       | reg        | -          |
| LOADI | 11             | reg        | value      | -          |
| MOVE  | 12             | reg1       | reg2       | -          |
| CMP   | 13             | reg1       | reg2       | -          |
| JMP   | 14             | addr       | -          | -          |
| JE    | 15             | addr       | -          | -          |
| JNE   | 16             | addr       | -          | -          |
| JG    | 17             | addr       | -          | -          |
| JL    | 18             | addr       | -          | -          |
| JGE   | 19             | addr       | -          | -          |
| JLE   | 20             | addr       | -          | -          |
| INP   | 21             | type       | addr       | size       |
| OUT   | 22             | type       | addr       | size       |
| HALT  | 23             | -          | -          | -          |

*Here is a brief explanation of how to use each instruction:*

### *ALU - Arithmetic Logical Unit*

- *ADD:* *the ADD instruction adds the value of two registers, and stores the result value in a third register.*
- *SUB:* *the SUB instruction subtracts the value from two registers, and stores the result value in a third register.*
- *MUL:* *the MUL instruction multiplies the value of two registers, and stores the result value in a third register.*
- *DIV:* *the DIV instruction divides the value of two registers, and stores the result value in a third register.*
- *AND:* *The AND instruction compares the value of two registers bit by bit. If a bit with the same position in both is 1, it returns 1, otherwise, it returns 0. After that, it converts the binary value to decimal and stores it in a third register.*
- *OR:* *The OR instruction compares the value of two registers bit by bit. If at least one bit of the same position in both is 1, it returns 1, otherwise, it returns 0. After that, it converts the binary value to decimal and stores it in a third register.*
- *XOR:* *The XOR instruction compares the value of two registers bit by bit. If only one bit of the same position in both is 1, it returns 1, otherwise, it returns 0. After that, it converts the binary value to decimal and stores it in a third register.*
- *CMP:* *The CMP instruction performs 6 comparisons between the values of 2 registers, and updates the value of the comparison flags depending on whether the comparison result is true or false.*

### *DMIS - Data Manipulation Instruction Set*

- *LOAD:* *The LOAD instruction loads the value stored at a memory address into a register.*
- *STORE:* *The STORE instruction loads the value of a register into a memory address.*
- *MOVE:* *The MOVE instruction loads the value of another register into a register.*
- *LOADI:* *The LOADI instruction instantly loads a value into a register.*

### *FCIS - Flux Control Instruction Set*

- *JMP:* *The JMP instruction unconditionally jumps to the specified memory address.*
- *JE:* *The JE instruction jumps to the specified memory address if the `le` flag is 1.*
- *JNE:* *The JNE instruction jumps to the specified memory address if the `ld` flag is 1.*
- *JG:* *The JG instruction jumps to the specified memory address if the `lg` flag is 1.*
- *JL:* *The JL instruction jumps to the specified memory address if the `ll` flag is 1.*
- *JGE:* *The JGE instruction jumps to the specified memory address if the `lge` flag is 1.*
- *JLE:* *The JLE instruction jumps to the specified memory address if the `lle` flag is 1.*

### *IOIS - Input and Output Instruction Set*

- *INP:* *The INP instruction reads user input and stores what was typed in a memory address.*
- *OUT:* *The OUT instruction prints the value stored at a memory address to the console.*

## *Writing Code*

*The code is written in the `code.c` file, within the `code` array. Each instruction is separated into 4 numbers, which will be separated into 4 memory addresses, and later into the `opcode` registers and their arguments. Not all instructions need all 3 arguments. Then fill in the necessary arguments, and put 0 in the remaining arguments, usually `arg3`. For example:*
```C
#include "code.h"

int code[] = {
    11,0,7,0,
    11,1,10,0,
    1,0,1,2,
    10,55535,2,0,
    22,0,55535,1,
    23,0,0,0,
};
int code_size = sizeof(code) / sizeof(code[0]);
```

*In this example, I moved the number 7 to register 0, moved 10 to register 1, added register 0 to register 1, and stored the results in register 2. After that, I moved the value of register 2 to the address of memory 55535, and I printed its value and closed the program. Note that in instructions 11 (LOADI) and 10 (STORE), I put 0 as the third argument. This is because these instructions do not need a third argument, so I set it to 0. This is necessary because the CCU assumes that all instructions have 3 arguments. If you do not define a third argument, it will give a segmentation fault.*
