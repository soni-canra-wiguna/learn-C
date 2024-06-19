#include <stdio.h>
#include <math.h>

int main()
{

  const double PI = 3.14159;
  double radius;
  // find circumference a circle. formula 2πR
  double circumference;
  double area;

  printf("\nenter radius of a circle:");
  scanf("%lf", &radius);

  // asign value
  circumference = 2 * PI * radius;
  area = PI * radius * radius; // i this we can using pow PI * pow(radius, radius)

  printf("circumference a circle is: %lf\n", circumference);
  printf("area a circle is: %lf", area);

  return 0;
}