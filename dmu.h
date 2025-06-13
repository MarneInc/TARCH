#ifndef DMU_H
#define DMU_H

#include "cpu.h"
#include "ram.h"
#include <stdint.h>

void LD(uint16_t reg, uint16_t addrss, uint16_t m);
void STR(uint16_t addrss, uint16_t reg, uint16_t m);
void MOV(uint16_t reg1, uint16_t reg2, uint16_t m);
void LDI(uint16_t reg, uint16_t value, uint16_t m);

#endif
