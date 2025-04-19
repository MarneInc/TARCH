#ifndef FCIS_H
#define FCIS_H

#include "cpu.h"
#include "ccu.h"
#include <stdint.h>

void JMP(uint16_t addrss, uint16_t m, uint16_t n);
void JE(uint16_t addrss, uint16_t m, uint16_t n);
void JNE(uint16_t addrss, uint16_t m, uint16_t n);
void JG(uint16_t addrss, uint16_t m, uint16_t n);
void JL(uint16_t addrss, uint16_t m, uint16_t n);
void JGE(uint16_t addrss, uint16_t m, uint16_t n);
void JLE(uint16_t addrss, uint16_t m, uint16_t n);

#endif
