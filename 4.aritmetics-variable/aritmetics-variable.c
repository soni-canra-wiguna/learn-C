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
  printf("e value: %.1f\n", e); // output: 2.5000

  // augmented assignment operators
  int f = 10;
  f += 10; // output 20
  f -= 5;  // output 15
  f *= 2;  // output 30
  f /= 10; // output 3
  f %= 2;  // output 1

  printf("f value : %d\n", f); // otuput 1

  return 0;
}