#include "ccu.h"

void decode() {
	for (int i = 0; i < code_size; i++) {
		if (memory[i].value < 55535) {
			memory[i].value = code[i];
		}
	}
}

void fetch() {
	opcode = memory[pc].value;
	arg1 = memory[pc + 1].value;
	arg2 = memory[pc + 2].value;
	arg3 = memory[pc + 3].value;
	pc += 4;
}

int run() {
	switch (opcode) {
		case 1:
			ADD(arg1, arg2, arg3);
			break;
		case 2:
			SUB(arg1, arg2, arg3);
			break;
		case 3:
			MUL(arg1, arg2, arg3);
			break;
		case 4:
			DIV(arg1, arg2, arg3);
			break;
		case 5:
			LOAD(arg1, arg2);
			break;
		case 6:
			STORE(arg1, arg2);
			break;
		case 7:
			MOVE(arg1, arg2);
			break;
		case 8:
			LOADI(arg1, arg2);
			break;
		case 9:
			AND(arg1, arg2, arg3);
			break;
		case 10:
			OR(arg1, arg2, arg3);
			break;
		case 11:
			XOR(arg1, arg2, arg3);
			break;
		case 12:
			CMP(arg1, arg2);
			break;
		case 13:
			JMP(arg1);
			break;
		case 14:
			JE(arg1);
			break;
		case 15:
			JNE(arg1);
			break;
		case 16:
			JG(arg1);
			break;
		case 17:
			JL(arg1);
			break;
		case 18:
			JGE(arg1);
			break;
		case 19:
			JLE(arg1);
			break;
		case 20:
			INP(arg1, arg2);
			break;
		case 21:
			OUT(arg1, arg2);
			break;
		case 22:
			return 0;
			break;
		default:
			break;
	}
	return 0;
}
