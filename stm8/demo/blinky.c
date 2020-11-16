#include "stm8l.h"

int main() {
	int d;
	// Configure pins
	PD_DDR = 0x0F;
	PC_CR1 = 0x0F;
	// Loop
	do {
		PD_ODR ^= 0x0f;
		PC_ODR ^= 0xff;
		for(d = 0; d < 29000; d++) { }
	} while(1);
}
