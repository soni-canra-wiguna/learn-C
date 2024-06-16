#include <stdio.h>
// apa itu function prototype?
// function declaration, without a body, before main()

// kenapa sih harus pake function prototype?
// coba lihat file no 14, aku menuliskan keresahanku disitu,
// intinya meskipun error functionnya masih di execute.
// juga, banyak compiler c ngga bakal show error ketika missing argumen di functionnya

// gimana sih caranya pake function prototype?
// kita declare function dengan tipe datanya, dan tanpa body
void square(int x, int y);
int circle(int s); // kita declare data type untuk return functionnya

int main()
{
  int x = 4;
  int y = 4;

  // square(x); // ketika dia nerima 1 argumen dan mencoba di compile, dia akan error

  square(x, y);
  int sisi = circle(x);
  printf("diameter lingkaran adalah %d", sisi);

  return 0;
}

void square(int x, int y)
{
  int result = x * y;

  printf("result x * y is %d\n", result);
}

int circle(int s)
{
  return s * 2;
}