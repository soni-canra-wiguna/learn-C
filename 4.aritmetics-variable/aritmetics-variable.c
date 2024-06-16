#include <stdio.h>

int main()
{
  // + (addition)
  // - (substraction)
  // * (multiplication)
  // / (division)
  // % (modulus)
  // ++ (incerment)
  // -- (decerment)

  const int x = 10;
  const int y = 5;
  int a = 4;

  // int z = x + y;
  // int z = x - y;
  // int z = x * y;
  // int z = x / y;
  // int z = x % y;
  int z = a++;
  // int z = a--;
  printf("z value: %d", z);

  int b = 5;
  int c = 2;

  int d = b / c;
  printf("d value: %d\n", d); // output: 2, should 2.5
  float e = b / (float)c;
  printf("e value: %.1f", e); // output: 2.5000

  return 0;
}