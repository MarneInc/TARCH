#include "code.h"

#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4
#define AND 5
#define OR 6
#define XOR 7
#define NOT 8
#define LD 9
#define STR 10
#define LDI 11
#define MOV 12
#define CMP 13
#define JMP 14
#define JE 15
#define JNE 16
#define JG 17
#define JL 18
#define JGE 19
#define JLE 20
#define INP 21
#define OUT 22
#define HLT 23
#define INC 24
#define DEC 25
#define RET 26

#define R0 0
#define R1 1
#define R2 2
#define R3 3
#define R4 4
#define R5 5
#define R6 6
#define R7 7
#define R8 8
#define R9 9
#define R10 10
#define R11 11
#define R12 12
#define R13 13
#define R14 14
#define R15 15

#define INT 0
#define CHR 1

int code[] = {
	JMP, 12, 0, 0,
	OUT, INT, 55536, 1,
	RET, 0, 0, 0,
	LDI, R0, 7, 0,
	LDI, R1, 10, 0,
	LDI, R3, 8, 0,
	ADD, R0, R1, R2,
	STR, 55535, R2, 0,
	STR, 55536, R3, 0,
	JMP, 4, 0, 0,
	OUT, INT, 55535, 1,
	HLT, 0, 0, 0,
};
int code_size = sizeof(code) / sizeof(code[0]);
