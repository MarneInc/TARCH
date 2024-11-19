#ifndef CPU_H
#define CPU_H

#include <stdint.h>

// Registers data type
typedef struct {
	uint16_t name;
	uint16_t value;
} reg;

// General purpose registers
extern reg registers[];

// Character table
extern char char_table[];

// Program counter
extern uint16_t pc;

// Instruction registers
extern uint16_t opcode;
extern uint16_t arg1;
extern uint16_t arg2;
extern uint16_t arg3;

// Comparison flags
extern uint16_t le;
extern uint16_t ld;
extern uint16_t lg;
extern uint16_t ll;
extern uint16_t lge;
extern uint16_t lle;

// Defines registers in CPU
void start_reg();

#endif
