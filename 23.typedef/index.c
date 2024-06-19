#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[25];
  char password[12];
  int id;
} User;

int main()
{
  // typedef = reserved keyword that gives an existing datatype a "nickname"
  User user1;

  printf("username: ");
  scanf("%s", &user1.name);
  scanf("%s"); // kalo ngga nambahin ini, entah kenapa jadi error, maksudnya kalo namenya kepanjangan tapi belum sampe 25, dia ni error
  printf("password: ");
  scanf("%s", &user1.password);
  scanf("%s"); // ini juga
  printf("id: ");
  scanf("%s", &user1.id);

  printf("username: %s, passoword: %s, id: %d\n", user1.name, user1.password, user1.id);

  User user2 = {"naruto", "naruTO123", 343563};

  printf("username: %s, passoword: %s, id: %d\n", user2.name, user2.password, user2.id);
  return 0;
}