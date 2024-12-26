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
			AND(arg1, arg2, arg3);
			break;
		case 6:
			OR(arg1, arg2, arg3);
			break;
		case 7:
			XOR(arg1, arg2, arg3);
			break;
    case 8:
      NOT(arg1, arg2);
      break;
		case 9:
			LOAD(arg1, arg2);
			break;
		case 10:
			STORE(arg1, arg2);
			break;
		case 11:
			LOADI(arg1, arg2);
			break;
		case 12:
			MOVE(arg1, arg2);
			break;
		case 13:
			CMP(arg1, arg2);
			break;
		case 14:
			JMP(arg1);
			break;
		case 15:
			JE(arg1);
			break;
		case 16:
			JNE(arg1);
			break;
		case 17:
			JG(arg1);
			break;
		case 18:
			JL(arg1);
			break;
		case 19:
			JGE(arg1);
			break;
		case 20:
			JLE(arg1);
			break;
		case 21:
			INP(arg1, arg2, arg3);
			break;
		case 22:
			OUT(arg1, arg2, arg3);
			break;
		case 23:
			halt();
      break;
		default:
			puts("Invalid Instruction");
      halt();
	}
	return 0;
}
