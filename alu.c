#include "alu.h"

void ADD(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value + registers[reg2].value;
	registers[reg3].value = result;
}

void SUB(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value - registers[reg2].value;
	registers[reg3].value = result;
}

void MUL(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value * registers[reg2].value;
	registers[reg3].value = result;
}

void DIV(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value / registers[reg2].value;
	registers[reg3].value = result;
}

void AND(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value & registers[reg2].value;
	registers[reg3].value = result;
}

void OR(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value | registers[reg2].value;
	registers[reg3].value = result;
}

void XOR(uint16_t reg1, uint16_t reg2, uint16_t reg3) {
	uint16_t result = registers[reg1].value ^ registers[reg2].value;
	registers[reg3].value = result;
}

void CMP(uint16_t reg1, uint16_t reg2) {
	uint16_t a = registers[reg1].value;
	uint16_t b = registers[reg2].value;

	le = 0;
	ld = 0;
	lg = 0;
	ll = 0;
	lge = 0;
	lle = 0;

	if (a == b) {
		le = 1;
	}
	if (a != b) {
		ld = 1;
	}
	if (a > b) {
		lg = 1;
	}
	if (a < b) {
		ll = 1;
	}
	if (a >= b) {
		lge = 1;
	}
	if (a <= b) {
		lle = 1;
	}
}
