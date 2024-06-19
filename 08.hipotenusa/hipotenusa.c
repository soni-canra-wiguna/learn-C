#include <stdio.h>
#include <math.h>

int main()
{

  // hipotenusa / sisi miring.
  // disini maksudnya sisi miring di geometry
  // yang segitiga itu
  // formula -> c = √(a² + b²) or a² + b² = c²

  double a; // segitiga sisi bawah
  double b; // segitiga sisi yang tegak lurus
  double c; // sisi miring(hipotenusa) dari segitiga

  printf("mencari sisi miring dari segitiga\n");
  printf("masukkan sisi a:");
  scanf("%lf", &a);

  printf("masukkan sisi b:");
  scanf("%lf", &b);

  c = sqrt((a * a) + (b * b));

  printf("sisi miring/hipotenusanya adalah %lf", c);

  return 0;
}