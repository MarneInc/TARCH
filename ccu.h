#ifndef CCU_H
#define CCU_H

#include <stdlib.h>
#include <stdio.h>
#include "cpu.h"
#include "ram.h"
#include "alu.h"
#include "dmu.h"
#include "iou.h"
#include "fcu.h"
#include "code.h"

void decode();
void fetch();
void run(uint16_t icode, uint16_t a1, uint16_t a2, uint16_t a3);

#endif
