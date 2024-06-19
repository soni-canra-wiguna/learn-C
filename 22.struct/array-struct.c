#include <stdio.h>
#include <string.h>

struct Student
{
  char name[25];
  float gpa;
};

int main()
{

  struct Student student1 = {"naruto", 2.0};
  struct Student student2 = {"sasuke", 4.0};
  struct Student student3 = {"hinata", 3.0};
  struct Student student4 = {"sakura", 1.0};

  // array struct
  struct Student students[] = {student1, student2, student3, student4};

  // karena ini adalah sebuah array, untuk show valuenya kita harus looping
  int length = sizeof(students) / sizeof(students[0]);
  for (int i = 0; i < length; i++)
  {
    printf("name: %s, gpa: %.1f\n", students[i].name, students[i].gpa);
  }

  return 0;
}