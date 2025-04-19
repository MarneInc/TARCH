#include "fcis.h"

void JMP(uint16_t addrss, uint16_t m, uint16_t n) {
	pc = addrss;
}

void JE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (le == 1) {
		pc = addrss;
	}
}

void JNE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (le == 0) {
		pc = addrss;
	}
}

void JG(uint16_t addrss, uint16_t m, uint16_t n) {
	if (lg == 1) {
		pc = addrss;
	}
}

void JL(uint16_t addrss, uint16_t m, uint16_t n) {
	if (ll == 1) {
		pc = addrss;
	}
}

void JGE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (lge == 1) {
		pc = addrss;
	}
}

void JLE(uint16_t addrss, uint16_t m, uint16_t n) {
	if (lle == 1) {
		pc = addrss;
	}
}
