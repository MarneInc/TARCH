#include <stdio.h>
#include "cpu.h"
#include "ram.h"
#include "alu.h"
#include "dmis.h"
#include "fcis.h"
#include "iois.h"
#include "ccu.h"
#include "code.h"

int main() {
	puts("TARCH Bios v0.2 alpha build 2024-11-20");
	puts("------------------------------------------------------");
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
		puts("RAN are empty! No instruction to read");
		puts("Shutting down...");
		getchar();
	}
	return 0;
}
