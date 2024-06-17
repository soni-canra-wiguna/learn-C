#include <stdio.h>
#include <string.h>

#define GRN "\x1B[32m"
#define RESET "\x1B[0m"

int main()
{
  // for loop = repeat a section of code a limited amount of times
  const int MAX = 10;

  // incerment
  // for (int i = 1; i <= MAX; i++) // di bagian i++ juga bisa di ganti ke i+=2 dan lainnya
  // {
  //   printf("%d. Hello\n", i);
  // }

  // decrement
  // for (int i = MAX; i >= 1; i--) // di bagian i-- juga bisa di ganti ke i-=2 dan lainnya
  // {
  //   printf("%d. hello\n", i);
  // }

  // ============================================

  // while loop = repeats a section of code possibly unlimited times
  //  WHILE some condition remine true
  //  a while loop might not execute at all

  // char name[25];

  // printf("\nPut your name: ");
  // fgets(name, 25, stdin);
  // name[strlen(name) - 1] = '\0';

  // while (strlen(name) == 0)
  // {
  //   printf("name is require\n");
  //   printf("Put your name: ");
  //   fgets(name, 25, stdin);
  //   name[strlen(name) - 1] = '\0';
  // }

  // printf(GRN "welcome, %s" RESET, name);

  // ============================================

  // do while loop
  // while loop = check a condition, then executes a block of code if condition is true
  // do while loop = always execute a block of code once, then checks a condition
  // simpelnya sih, do while loop ni bakal terus di jalanin selagi memenuhi kondisi di bagian while-nya
  // int number = 0;
  // int sum = 0;

  // do
  // {
  //   printf("enter # above number : ");
  //   scanf("%d", &number);
  //   if (number > 0)
  //   {
  //     sum += number;
  //   }
  // } while (number > 0);

  // printf("sum total : %d", sum);

  // ============================================

  // nested loop

  int rows;
  int columns;
  char symbol;

  printf("\nenter rows number : ");
  scanf("%d", &rows);

  printf("enter columns number : ");
  scanf("%d", &columns);

  scanf("%c");

  printf("enter symbol number : ");
  scanf("%c", &symbol);

  for (int i = 1; i <= rows; i++)
  {
    for (int i = 1; i <= columns; i++)
    {
      printf("%c", symbol);
    }

    printf("\n");
  }

  return 0;
}