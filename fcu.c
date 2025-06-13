#include "fcu.h"

void JMP(uint16_t addrss, uint16_t m, uint16_t n) {
	if (sp < 55534) {
		memory[sp].value = pc;
		sp += 1;
		pc = addrss;
	} else if (sp == 55534) {
		memory[sp].value = pc;
		pc = addrss;
	} else {
		puts("Stack is full!");
		HLT(1, 0, 0);
	}
}

void JE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (le == 1) {
		if (sp < 55534) {
			memory[sp].value = pc;
			sp += 1;
			pc = addrss;
		} else if (sp == 55534) {
			memory[sp].value = pc;
			pc = addrss;
		} else {
			puts("Stack is full!");
			HLT(1, 0, 0);
		}
	}
}

void JNE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (le == 0) {
		if (sp < 55534) {
			memory[sp].value = pc;
			sp += 1;
			pc = addrss;
		} else if (sp == 55534) {
			memory[sp].value = pc;
			pc = addrss;
		} else {
			puts("Stack is full!");
			HLT(1, 0, 0);
		}
	}
}

void JG(uint16_t addrss, uint16_t m, uint16_t n) {
	if (lg == 1) {
		if (sp < 55534) {
			memory[sp].value = pc;
			sp += 1;
			pc = addrss;
		} else if (sp == 55534) {
			memory[sp].value = pc;
			pc = addrss;
		} else {
			puts("Stack is full!");
			HLT(1, 0, 0);
		}
	}
}

void JL(uint16_t addrss, uint16_t m, uint16_t n) {
	if (ll == 1) {
		if (sp < 55534) {
			memory[sp].value = pc;
			sp += 1;
			pc = addrss;
		} else if (sp == 55534) {
			memory[sp].value = pc;
			pc = addrss;
		} else {
			puts("Stack is full!");
			HLT(1, 0, 0);
		}
	}
}

void JGE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (lge == 1) {
		if (sp < 55534) {
			memory[sp].value = pc;
			sp += 1;
			pc = addrss;
		} else if (sp == 55534) {
			memory[sp].value = pc;
			pc = addrss;
		} else {
			puts("Stack is full!");
			HLT(1, 0, 0);
		}
	}
}

void JLE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (lle == 1) {
		if (sp < 55534) {
			memory[sp].value = pc;
			sp += 1;
			pc = addrss;
		} else if (sp == 55534) {
			memory[sp].value = pc;
			pc = addrss;
		} else {
			puts("Stack is full!");
			HLT(1, 0, 0);
		}
	}
}

void RET(uint16_t m, uint16_t n, uint16_t o) {
	if (sp > 55407) {
		pc = memory[sp - 1].value;
		memory[sp - 1].value = 0;
		sp -= 1;
	} else {
		puts("Stack is empty!");
		HLT(1, 0, 0);
	}
}
