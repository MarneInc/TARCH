#ifndef IOIS_H
#define IOIS_H

#include "cpu.h"
#include "ram.h"
#include <stdio.h>
#include <stdint.h>

void INP(uint16_t type, uint16_t addrss);
void OUT(uint16_t type, uint16_t addrss);

#endif
