#include <stdio.h>

int main()
{
  // untuk print variable, kita butuh kita butuh format yang spesifik
  // dimulai dengan % dan secret characternya.

  // %c = character
  // %s = string (array of character)
  // %d = interger
  // %f = float
  // %lf = double
  // more...

  // %.1 = decimal precision
  // %1 = minimum field width
  // - = left align

  float num1 = 5.43;
  float num2 = 10.99;
  float num3 = 100.39;

  // printf("price book $%f", num1);
  printf("price book $%.2f", num1); // with decimal precision

  return 0;
}