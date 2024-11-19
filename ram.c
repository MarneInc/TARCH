#include "ram.h"

ram memory[65536] = {};

void start_ram() {
	for (int i = 0; i < 65536; i++) {
		memory[i].address = i;
		memory[i].value = 0;
	}
}
