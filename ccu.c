#include "ccu.h"

void (*functions[25])(uint16_t, uint16_t, uint16_t) = {
	ADD, SUB, MUL, DIV,
	AND, OR, XOR, NOT,
	LD, STR, LDI, MOV,
	CMP, JMP, JE, JNE,
	JG, JL, JGE, JLE,
	INP, OUT, HLT, INC,
	DEC
};

void decode() {
	for (int i = 0; i < code_size; i++) {
		memory[i].value = code[i];
	}
}

void fetch() {
	opcode = memory[pc].value;
	arg1 = memory[pc + 1].value;
	arg2 = memory[pc + 2].value;
	arg3 = memory[pc + 3].value;
	pc += 4;
}

void run(uint16_t icode, uint16_t a1, uint16_t a2, uint16_t a3) {
	if (icode > 0 && icode < 26) {
		functions[icode - 1](a1, a2, a3);
	} else {
		puts("Invalid Instruction!");
		HLT(1, 0, 0);
	}
}
