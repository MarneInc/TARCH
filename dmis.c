#include "dmis.h"

void LD(uint16_t reg, uint16_t addrss, uint16_t m) {
	registers[reg].value = memory[addrss].value;
}

void STR(uint16_t addrss, uint16_t reg, uint16_t m) {
	memory[addrss].value = registers[reg].value;
}

void MOV(uint16_t reg1, uint16_t reg2, uint16_t m) {
	registers[reg1].value = registers[reg2].value;
}

void LDI(uint16_t reg, uint16_t value, uint16_t m) {
	registers[reg].value = value;
}
