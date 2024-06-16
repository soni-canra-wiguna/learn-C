#include <stdio.h>
#include <stdbool.h>

int main()
{
  // logical operator &&(AND), ||(OR) , !(NOT)
  // && = all statement should be true
  int points = 100;
  bool isMembership = true;

  if (points > 50 && isMembership)
  {
    printf("you are silver member\n");
  }

  // || = at least one statement should be true
  int age = 20;
  bool isFalse = false;

  if (age > 18 || isFalse)
  {
    printf("kamu sudah dewasa!!\n");
  }

  // ! = reverse condition

  bool isSignedIn = true; // assume user is sign in

  if (!isSignedIn)
  {
    printf("unauthorized\n");
  }
  else
  {
    printf("authorized\n");
  }

  return 0;
}