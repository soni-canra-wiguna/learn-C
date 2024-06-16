#include <stdio.h>
#include <stdbool.h>

int main()
{

  int age;
  printf("masukkan umur kamu :");
  scanf("%d", &age);

  if (age < 18)
  {
    printf("umur kamu %d tahun,kamu masih di bawah umur\n", age);
  }
  else if (age == 18)
  {
    printf("kamu pas %d tahun\n", age);
  }
  else
  {
    printf("kamu sudah dewasa!!\n");
  }

  return 0;
}