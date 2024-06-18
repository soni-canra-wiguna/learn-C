#include <stdio.h>
#include <string.h>

int main()
{
  // swap value
  // mungkin nanti di pake buat sorting algorithm.
  // kaya sorting algorithm fisher yates.
  // char x = 'X';
  // char y = 'Y';
  // char temp;

  // temp = x;
  // x = y;
  // y = temp;

  // printf("X = %c\n", x);
  // printf("Y = %c", y);

  // ===========================

  char x[15] = "water";
  char y[15] = "lemonade";
  char temp[15]; // temporary

  strcpy(temp, x); // temp copy x, jadi temp = "water"
  strcpy(x, y);    // tadi udah di assign, jadi x = "lemonade"
  strcpy(y, temp); // tadi temp udah di assign sama value x, jadi y = "water"

  printf("x = %s\n", x); // x = "lemonade"
  printf("y = %s", y);   // y = "water"

  return 0;
}