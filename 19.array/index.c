#include <stdio.h>
#include <string.h>

int main()
{
  // array = a data structure that can store many values of the same data type

  // double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};

  // bisa juga seperti ini
  // double prices[5];

  // prices[0] = 5.0;
  // prices[1] = 10.0;
  // prices[2] = 15.0;
  // prices[3] = 20.0;
  // prices[4] = 25.0;

  // atau bisa juga di combine
  // double prices[10] = {5.0, 10.0, 15.0, 20.0, 25.0};
  // prices[5] = 30.0;
  // prices[6] = 35.0;

  // printf("$%.2lf", prices[5]);
  // printf("$%.2lf", prices[7]); // kalo kita print index dan value nya belum di assign, di bakal 0.

  // =====================================================

  // LOOPING ARRAY
  // double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 40.0, 100.0};

  // length dari array: total size / size item [0] atau item ke berapa aja
  // printf("size prices: %d bytes\n", sizeof(prices));
  // printf("size single price: %d bytes", sizeof(prices[0]));

  // for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
  // {
  //   printf("$%.2lf\n", prices[i]);
  // }

  // =====================================================

  // 2D Array
  // 2D Array = an array, where which element is an entire array.
  // usefull if we need a matrix, grid, or table of data
  /*
  //lihat bawah. [2] itu jumlah max table berapa, sedangkan 3 itu jumlah max item di dalam array.
  //karena dia ni array berarti pake index dan di mulai dari 0. begitupun dengan item dari table di bawah

    int numbers[2][3] = {
                        {1,2,3}, <- column ni array juga. jadi pake index buat aksesnya.
                        {4,5,6}
                        };
  */

  // int r;
  // int c;

  // printf("masukkan rows : ");
  // scanf("%d", &r);
  // printf("masukkan columns: ");
  // scanf("%d", &c);

  // int numbers[3][3]; // kosongan
  // // gimana cara assign value ke dalam array-nya?
  // numbers[0][0] = 1;
  // numbers[0][1] = 2;
  // numbers[0][2] = 3;
  // numbers[1][0] = 4;
  // numbers[1][1] = 5;
  // numbers[1][2] = 6;
  // numbers[2][0] = 7;
  // numbers[2][1] = 8;
  // numbers[2][2] = 9;

  // int rows = sizeof(numbers) / sizeof(numbers[0]);
  // int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

  // // kita bisa pake loop
  // for (int i = 0; i < rows; i++)
  // {
  //   for (int j = 0; j < columns; j++)
  //   {
  //     printf("%d ", numbers[i][j]);
  //   }
  //   printf("\n");
  // }

  char cars[][8] = {"tesla", "daihatsu", "honda", "yamaha"}; // kenapa kalo di bawah 8, misal 7 jadi error ya?
  strcpy(cars[0], "mv");

  for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
  {
    printf("%s\n", cars[i]);
  }

  return 0;
}