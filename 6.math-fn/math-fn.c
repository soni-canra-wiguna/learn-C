#include <stdio.h>
#include <math.h>

int main()
{

  double a = sqrt(9);    // √a = square root
  double b = pow(2, 4);  // a pangkat b = power
  int c = round(3.5);    // buletin ke yang paling mendekati. .4 ke bawah jadi flor, selain itu ceil
  int d = ceil(3.14);    // buletin ke atas
  int e = floor(3.89);   // buletin ke bawah
  double f = fabs(-100); // absolute value, return value is positive
  double g = log(9);
  double x = sin(45);
  double y = cos(45);
  double z = tan(45);

  printf("%lf", y);
  // printf("%d", e);

  return 0;
}