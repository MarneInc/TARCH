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
	puts("MARCH Bios v0.1 alpha build 2024-07-31");
	puts("------------------------------------------------------");
	puts("Starting registers...");
	start_reg();
	puts("Starting RAM...");
	start_ram();
	puts("Decoding...");
	decode();
	puts("Running...");
	for (int i = 0; i < code_size; i++) {
		fetch();
		run();
	}
	puts("Shutting down...");
	getchar();
	return 0;
}
