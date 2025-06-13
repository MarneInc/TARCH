#ifndef CPU_H
#define CPU_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	uint16_t name;
	uint16_t value;
} reg;

extern reg registers[];

extern char char_table[];

extern uint16_t pc;

extern uint16_t opcode;
extern uint16_t arg1;
extern uint16_t arg2;
extern uint16_t arg3;

extern uint16_t le;
extern uint16_t ld;
extern uint16_t lg;
extern uint16_t ll;
extern uint16_t lge;
extern uint16_t lle;

extern uint16_t sp;

void start_reg();
void HLT(uint16_t code, uint16_t m, uint16_t n);

#endif
