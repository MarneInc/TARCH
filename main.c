#include <stdio.h>
#include "cpu.h"
#include "ram.h"
#include "ccu.h"

int main() {
	puts("TARCH Bios v0.3 alpha build 2024-12-26");
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
			run();
		}
	} else {
		puts("RAM are empty! No instruction to read");
    halt();
	}
	return 0;
}
