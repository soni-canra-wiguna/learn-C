#include <stdio.h>

int calculateLengthArray(int x, int y)
{
  int length = x / y;
  return length;
}

// bubble sort
void sort(int numbers[], int length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = 0; j < length - 1 - i; j++)
    {
      if (numbers[j] > numbers[j + 1]) // misal ini adalah item pertama numbers[j], lalu ini numbers[j+1] adalah item selanjutnya. dan beitupun seterusnya
      {
        int temp = numbers[j];       // misal j itu awal loop, jadi assume dia ni 0,
        numbers[j] = numbers[j + 1]; // tadi item pertama(j) = 0. lalu kita ubah menjadi j+1, jadi j = 1, dan seterusny setiap kali loop
        numbers[j + 1] = temp;       // lalu tadi j jadi 1, lalu di ubah lagi jadi 0/ value sebelumnya.
      }
    }
  }
}

void printValue(int numbers[], int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%d ", numbers[i]);
  }
}

int main()
{
  int numbers[] = {4, 2, 5, 3, 1, 9, 6, 8, 7};
  int length = calculateLengthArray(sizeof(numbers), sizeof(numbers[0]));

  sort(numbers, length);
  printValue(numbers, length);

  return 0;
}