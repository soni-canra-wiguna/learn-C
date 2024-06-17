#include <stdio.h>
#include <string.h>

int main()
{

  char firstName[] = "Soni";
  char lastName[] = "Canra";

  // strlwr(firstName); // convert to lowercase
  // strupr(firstName); // convert to uppercase
  // strcat(firstName, lastName); // append lastname to end of fisrtname. simpelnya sih di ngegabungin 2 string.
  // strncat(firstName, lastName, 1); // append n characters from lastname to firstname
  // strcpy(firstName, lastName); // copy lastname to firstname
  // strncpy(firstName, lastName, 1); // copy n characters from lastname to firstname

  // strset(firstName, '*') // set firstname menjadi bintang, input: Soni, output: ****
  // strnset(firstName, 'B', 1) // input: Soni, output: Boni.
  // strrev(firstName) // rev for reverse, input: Soni, output: inoS

  // printf("%s", firstName);

  // int
  int resultStrlen = strlen(firstName);                 // returns string length as int
  int resultStrcmp = strcmp(firstName, lastName);       // string compare all characters.
                                                        // kalo kedua  kata-nya sama di bakal return 0, kalo ngga sama di bakal return -1.
                                                        // NOTE: besar kecil huruf juga berpengaruh.
  int resultStrncmp = strncmp(firstName, lastName, 3);  // string compare n characters
  int resultStrcmpi = strcmpi(firstName, lastName);     // string compare all character(but ignore case)
  int resultStrcmpi = strnicmp(firstName, lastName, 3); // string compare n character(but ignore case)

  printf("%d", resultStrncmp);

  return 0;
}