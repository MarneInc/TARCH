#ifndef FCIS_H
#define FCIS_H

#include "cpu.h"
#include "ccu.h"
#include <stdint.h>

void JMP(uint16_t addrss);
void JE(uint16_t addrss);
void JNE(uint16_t addrss);
void JG(uint16_t addrss);
void JL(uint16_t addrss);
void JGE(uint16_t addrss);
void JLE(uint16_t addrss);

#endif
