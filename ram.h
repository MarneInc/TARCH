#ifndef RAM_H
#define RAM_H

#include <stdint.h>

typedef struct {
	uint16_t address;
	uint16_t value;
} ram;

extern ram memory[];

void start_ram();

#endif
