#include <stdio.h>

int main() {
  int decimal_number, quotient, remainder, binary_number, count_bits = 0;

  printf("Enter a decimal number: ");
  scanf("%d", &decimal_number);

  quotient = decimal_number;
  binary_number = 0;

  while (quotient != 0) {
    remainder = quotient % 2;
    binary_number = binary_number * 10 + remainder;
    quotient /= 2;
  }

  printf("The binary equivalent of %d is %d.\n", decimal_number, binary_number);

  // Count the number of bits in the binary number.
  while (binary_number > 0) {
    if (binary_number % 10 == 1) {
      count_bits++;
    }
    binary_number /= 10;
  }

  printf("The number of bits in %d is %d.\n", decimal_number, count_bits);

  return 0;
}
