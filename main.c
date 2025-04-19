#include <stdio.h>
#include "cpu.h"
#include "ram.h"
#include "ccu.h"

int main() {
	puts("TARCH Bios v0.4 alpha build 2025-04-19");
	puts("--------------------------------------");
	puts("Starting registers...");
	start_reg();
	puts("Starting RAM...");
	start_ram();
	puts("Decoding...");
	decode();
	puts("Running...");
	if (memory[0].value != 0) {
		while (1) {
			fetch();
			run(opcode, arg1, arg2, arg3);
		}
	} else {
		puts("RAM are empty! No instruction to read");
    	HLT(1, 0, 0);
	}
	return 0;
}
