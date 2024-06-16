#include <stdio.h>
#include <stdbool.h>

int main()
{
  char grade;

  printf("masukkan grade ulangan kamu(antara A, B, C,D, E, F) :");
  scanf("%c", &grade);

  switch (grade)
  {
  default:
    printf("masukkan huruf sesuai instruki dan harus kapital!!");
    break;
  case 'A':
    printf("%c? kamu pasti anak yang rajin, hebat!!", grade);
    break;
  case 'B':
    printf("%c? wah hampir dapet A nih, kerja bagus!!", grade);
    break;
  case 'C':
    printf("%c? perbanyak belajar ya!!", grade);
    break;
  case 'D':
    printf("%c? ngga belajar?", grade);
    break;
  case 'E':
    printf("%c? ngga sekalian salahin semua biar dapet F?", grade);
    break;
  case 'F':
    printf("%c? ngga ada harapan.", grade);
    break;
  }

  return 0;
}