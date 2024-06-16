#include <stdio.h>
#include <ctype.h>

int main()
{
  char unit;
  float temp; // temperature

  printf("Temperature in C or F ?: ");
  scanf("%c", &unit);

  unit = toupper(unit);

  switch (unit)
  {
  case 'C':
    printf("Enter the temp in Celcius: ");
    scanf("%f", &temp);
    temp = ((9 / 5) * temp) + 32;
    printf("now is %.1f farhenheit", temp);
    break;
  case 'F':
    printf("Enter the temp in Farhenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("now is %.1f celcius", temp);
    break;
  default:
    printf("invalid temperature");
    break;
  }

  return 0;
}