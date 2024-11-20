#include "fcis.h"

void JMP(uint16_t addrss) {
	pc = addrss;
}

void JE(uint16_t addrss) {
	if (le == 1) {
		pc = addrss;
	}
}

void JNE(uint16_t addrss) {
	if (le == 0) {
		pc = addrss;
	}
}

void JG(uint16_t addrss) {
	if (lg == 1) {
		pc = addrss;
	}
}

void JL(uint16_t addrss) {
	if (ll == 1) {
		pc = addrss;
	}
}

void JGE(uint16_t addrss) {
	if (lge == 1) {
		pc = addrss;
	}
}

void JLE(uint16_t addrss) {
	if (lle == 1) {
		pc = addrss;
	}
}
