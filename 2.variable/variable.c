#include <stdio.h>

int main()
{
  // variable = alocated space in memory to store a value.
  // declare variable can using declaration + initialization
  // int x; -> declaration
  // x = 10; -> intitialization
  // int y = 20; -> declaration + initalization

  int x;
  x = 10;
  int y = 20;

  int age = 19;
  float gpa = 3.50;                  // floating point
  char grade = 'A';                  // char store single character, harus pake single quotes
  char name[] = "soni canra wiguna"; // store > 1 character when using [] in variable name.
                                     // secara teknis di C ngga ada tipe data string karena string itu object

  // untuk print variable, kita butuh kita butuh format yang spesifik
  // dimulai dengan % dan secret characternya
  // misal:
  printf("my name is %s\n", name);         // %s -> s for string
  printf("i'm %d years old\n", age);       // %d -> d for decimal
  printf("my average grade: %c\n", grade); // %c -> c for character
  printf("my gap: %.2f\n", gpa);           // %f -> f for float, .2 itu ngambil 2 angka di belakang

  return 0;
}