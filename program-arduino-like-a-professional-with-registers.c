// Simulate direct register manipulation scenarios
#include <stdio.h> // Logs

static unsigned int DDRB = 0; // Data Direction Register B
static unsigned int PORTB = 0; // Output Register B

static void gpio_output(int bit) { // Configure output
  DDRB |= (1u << bit); // Set bit in DDRB
  printf("DDRB=0x%02X\n", DDRB); // Log
}

static void gpio_write(int bit, int high) { // Write output
  if (high) PORTB |= (1u << bit); else PORTB &= ~(1u << bit); // Set/clear bit
  printf("PORTB=0x%02X\n", PORTB); // Log
}

int main(void) { // Entry
  printf("Program Arduino Like A Professional with Registers\n"); // Title
  gpio_output(5); // PB5 as output
  gpio_write(5, 1); // Set PB5 high
  gpio_write(5, 0); // Set PB5 low
  return 0; // Exit
} // End main
