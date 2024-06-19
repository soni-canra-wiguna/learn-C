#include <stdio.h>
#include <string.h>

// enum are NOT STRINGS, but thye can be treated as int
enum Role
{
  USER,
  ADMIN,
  SUPER_ADMIN,
  MANAGER
};

int main()
{
  // enum = a user defined tupe of named integer identifiers
  //        help to make a program more readable

  enum Role userRole = USER;

  if (userRole == USER)
  {
    printf("cannot access dashboard!!");
  }
  else if (userRole == MANAGER)
  {
    printf("manager = read only");
  }
  else
  {
    printf("you are admin/super admin");
  }

  return 0;
}
