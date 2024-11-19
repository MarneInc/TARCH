#include "dmis.h"

void LOAD(uint16_t reg, uint16_t addrss) {
	if (addrss >= 55535) {
		registers[reg].value = memory[addrss].value;
	}
}

void STORE(uint16_t addrss, uint16_t reg) {
	if (addrss >= 55535) {
		memory[addrss].value = registers[reg].value;
	}
}

void MOVE(uint16_t reg1, uint16_t reg2) {
	registers[reg1].value = registers[reg2].value;
}

void LOADI(uint16_t reg, uint16_t value) {
	registers[reg].value = value;
}
