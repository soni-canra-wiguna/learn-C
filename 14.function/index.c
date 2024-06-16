#include <stdio.h>
// function / variable hanya bisa di panggil di function lain ketika
// function itu berada di atas.
//  contohnya, coba lihat function profile, ketika kita declare functionnya di atas
//  dan kita coba panggil di function main dia bekerja dengan baik.
//  tapi coba pindahin function profile ke bawah function main, dia pasti akan error
//  ketika di compile. seperti ini contoh errornya:
//  index.c: In function 'main':
//  index.c:31:3: warning: implicit declaration of function 'profile' [-Wimplicit-function-declaration]
//     profile(name, age);
//     ^~~~~~~
//  index.c: At top level:
//  index.c:36:6: warning: conflicting types for 'profile'
//   void profile(char name[], int age)
//        ^~~~~~~
//  index.c:31:3: note: previous implicit declaration of 'profile' was here
//     profile(name, age);

// void itu tipe datanya, tapi karena disini ngga return apapun
// kita pake void / kosong
// untuk argument, declare tipe datanya dulu sblm nama variablenya
void profile(char name[], int age)
{
  printf("my name is %s\n", name);
  printf("i'm %d years old", age);
};

// kata double sebelum nama function itu adalah tipe data untuk return.
// misal return dari functionnya itu int, kita declare kata kunci
// sebelum functionnya itu dengan kata int. ngga hanya berlaku untuk in dan double ya.
// bisa boolean, char, dsb.
double square(double x)
{
  double side = x * x;
  return side;
}

int main()
{
  int age = 19;
  char name[] = "canra";
  double side = 25.3;
  double s = square(side);

  printf("square : %.2lf\n", s);
  profile(name, age);

  return 0;
}