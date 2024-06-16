#include <stdio.h>
#include <string.h>

int main()
{
  char name[30];
  int age;

  printf("\nWhat's your name?");
  // scanf("%s", &name); cannot show name with whitespace, input : soni canra wiguna , output: soni
  fgets(name, 30, stdin);        // if we using like this, its automatically add new line after variable.
  name[strlen(name) - 1] = '\0'; // combine with this code should be work.

  printf("how old are you?");
  scanf("%d", &age);

  printf("\nhello %s, how are you?\n", name);
  printf("you are %d years old.\n", age);

  return 0;
}