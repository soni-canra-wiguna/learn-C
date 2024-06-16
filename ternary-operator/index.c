#include <stdio.h>

int findMaxValue(int x, int y)
{
  return x > y ? x : y;
}

int main()
{
  int maxNumber = findMaxValue(10, 5);

  printf("max number is %d", maxNumber);

  return 0;
}