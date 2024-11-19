#include "cpu.h"

reg registers[16];

char char_table[94] = {
	'a', 'b', 'c', 'd',
	'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l',
	'm', 'n', 'o', 'p',
	'q', 'r', 's', 't',
	'u', 'v', 'w', 'x',
	'y', 'z', 'A', 'B',
	'C', 'D', 'E', 'F',
	'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V',
	'W', 'X', 'Y', 'Z',
	'0', '1', '2', '3',
	'4', '5', '6', '7',
	'8', '9', '!', '@',
	'#', '$', '%', '^',
	'&', '*', '(', ')',
	'-', '_', '=', '+',
	'`', '~', '\\', '|',
	',', '.', '<', '>',
	'/', '?', ';', ':',
	'[', ']', '{', '}',
	'"',
};

uint16_t pc = 0;

uint16_t opcode = 0;
uint16_t arg1 = 0;
uint16_t arg2 = 0;
uint16_t arg3 = 0;

uint16_t le = 0;
uint16_t ld = 0;
uint16_t lg = 0;
uint16_t ll = 0;
uint16_t lge = 0;
uint16_t lle = 0;

void start_reg() {
	for (int i = 0; i < 16; i++) {
		registers[i].name = i;
		registers[i].value = 0;
	}
}
