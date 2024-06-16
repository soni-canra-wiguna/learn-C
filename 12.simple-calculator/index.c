#include <stdio.h>
#include <math.h>

// color
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

int main()
{
  int numOperator;
  double num1;
  double num2;
  double result;

  printf("kalkulator sederhana \n" RED "1. Penjumlahan(+)" RESET "\n" GRN "2. Pengurangan(-)" RESET "\n" BLU "3. Perkalian(*)" RESET "\n" YEL "4. Pembagian(/)" RESET "\n");
  printf("masukkan angka: ");
  scanf("%d", &numOperator);

  if (numOperator == 1)
  {
    printf(RED "kamu memilih Penjumlahan(+)\n" RESET);
    printf("\nmasukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("masukkan angka kedua: ");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf(RED "\nhasilnya adalah: %.2lf" RESET, result);
  }
  else if (numOperator == 2)
  {
    printf(GRN "kamu memilih Pengurangan(-)\n" RESET);
    printf("\nmasukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("masukkan angka kedua: ");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf(GRN "\nhasilnya adalah: %.2lf" RESET, result);
  }
  else if (numOperator == 3)
  {
    printf(BLU "kamu memilih Perkalian(*)\n" RESET);
    printf("\nmasukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("masukkan angka kedua: ");
    scanf("%lf", &num2);
    result = num1 * num2;
    printf(BLU "\nhasilnya adalah: %.2lf" RESET, result);
  }
  else if (numOperator == 4)
  {
    printf(YEL "kamu memilih Pembagian(/)\n" RESET);
    printf("\nmasukkan angka pertama: ");
    scanf("%lf", &num1);
    printf("masukkan angka kedua: ");
    scanf("%lf", &num2);
    result = num1 / num2;
    printf(YEL "\nhasilnya adalah: %.2lf" RESET, result);
  }
  else
  {
    printf("masukkan angka sesuai instruksi!!");
  }

  // printf(RED "red\n" RESET);
  // printf(GRN "green\n" RESET);

  return 0;
}