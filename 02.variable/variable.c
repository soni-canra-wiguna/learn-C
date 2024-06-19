#include <stdio.h>
#include <stdbool.h> // declare this when using bool

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
  float gpa = 3.50; // floating point. 4 bytes (32 bits of precision). 6 - 7 character after .

  char grade = 'A'; // char store single character, harus pake single quotes

  char name[] = "soni canra wiguna"; // store > 1 character when using [] in variable name.
                                     // secara teknis di C ngga ada tipe data string karena string itu object

  double d = 3.141592653589793; // 8 bytes (64 bits of precision). 15 - 16 character after .
                                // using %lf to print value. %lf -> lf for long float

  bool isWork = false; // 1 bytes (true / false). using %d to print value.
                       // result print : 0 for false, 1 for true.

  char f = 120;          // 1 byte (-128 to 127) %d or %c
  unsigned char g = 250; // 1 byte (0 to +255) %d or %c

  short int h = 32456;          // 2 bytes (-32,768 to 32,767) %d
  unsigned short int i = 32456; // 2 bytes (0 to 65,535) %d

  int j = 214748364;           // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
  unsigned int k = 4294967295; // 4 bytes (0 to 4,294,967,295) %u

  long long int l = 9223372036854775807;            // 8 bytes (-9 quintillion to 9 quintillion) %lld
  unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to 9 quintillion) %llu. U mencegah warn ketika di print

  // untuk print variable, kita butuh kita butuh format yang spesifik
  // dimulai dengan % dan secret characternya
  // misal:
  printf("my name is %s\n", name);         // %s -> s for string
  printf("i'm %d years old\n", age);       // %d -> d for decimal
  printf("my average grade: %c\n", grade); // %c -> c for character
  printf("my gap: %.2f\n", gpa);           // %f -> f for float, .2 itu ngambil 2 angka di belakang

  //  const / constant -> nilainya ngga bisa di asign/di ubah.
  float pi = 3.14159;
  pi = 4;
  // biasanya nilai contant pake uppercase untuk nama variablenya
  const float PI = 3.14159;
  // PI = 8; <-- cannot assign like that
  printf("pi value : %.0f\n", pi);

  return 0;
}