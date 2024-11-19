#include "iois.h"

void INP(uint16_t type, uint16_t addrss) {
	if (type == 0 && addrss >= 55535) {
		scanf("%hd", &memory[addrss].value);
	} else if (type == 1 && addrss >= 55535) {
		scanf("%hd", &memory[addrss].value);
	}
}

void OUT(uint16_t type, uint16_t addrss) {
	if (type == 0 && addrss >= 55535) {
		printf("%u\n", memory[addrss].value);
	} else if (type == 1 && addrss >= 55535) {
		printf("%c\n", char_table[memory[addrss].value]);
	}
}
