#ifndef ALU_H
#define ALU_H

#include "cpu.h"
#include <stdint.h>

void ADD(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void SUB(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void MUL(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void DIV(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void AND(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void OR(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void XOR(uint16_t reg1, uint16_t reg2, uint16_t reg3);
void NOT(uint16_t reg1, uint16_t reg2, uint16_t m);
void CMP(uint16_t reg1, uint16_t reg2, uint16_t m);
void INC(uint16_t reg, uint16_t m, uint16_t n);
void DEC(uint16_t reg, uint16_t m, uint16_t n);

#endif
