#include "iois.h"

void INP(uint16_t type, uint16_t addrss, uint16_t size) {
	if (type == 0) {
		scanf("%hd", &memory[addrss].value);
	} else if (type == 1) {
		char string[size + 1];
    fgets(string, size, stdin);
    string[strcspn(string, "\n")] = '\0';

    char char_codes[size + 1];

    for (int i = 0; i < size; i++) {
      char_codes[i] = string[i];
    }

    for (int i = addrss; i < addrss + size; i++) {
      for (int j = 0; j < 95; j++) {
        if (char_table[j] == char_codes[i - addrss]) {
          memory[i].value = j;
        }
      }
    }
	} else {
    return;
  }
}

void OUT(uint16_t type, uint16_t addrss, uint16_t size) {
	if (type == 0) {
		printf("%hd\n", memory[addrss].value);
	} else if (type == 1) {
		for (int i = addrss; i < addrss + size; i++) {
      if (char_table[memory[i].value] == '^') {
        printf("\n");
      } else {
        printf("%c", char_table[memory[i].value]);
      }
    }
	} else {
    return;
  }
}
