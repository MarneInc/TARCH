#ifndef DMIS_H
#define DMIS_H

#include "cpu.h"
#include "ram.h"
#include <stdint.h>

void LOAD(uint16_t reg, uint16_t addrss);
void STORE(uint16_t addrss, uint16_t reg);
void MOVE(uint16_t reg1, uint16_t reg2);
void LOADI(uint16_t reg, uint16_t value);

#endif
