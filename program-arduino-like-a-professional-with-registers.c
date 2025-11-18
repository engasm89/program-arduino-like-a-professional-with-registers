/*
 * Course: Program Arduino Like A Professional With Registers
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Program Arduino Like A Professional With Registers" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/program-arduino-like-a-professional-with-registers/
 * Repository: https://github.com/engasm89/program-arduino-like-a-professional-with-registers
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

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

int main(void) { // Program entry point
  printf("Program Arduino Like A Professional with Registers\n"); // Title
  gpio_output(5); // PB5 as output
  gpio_write(5, 1); // Set PB5 high
  gpio_write(5, 0); // Set PB5 low
  return 0; // Exit
} // End of main function
