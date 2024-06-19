#include <stdio.h>
#include <string.h>

// 1. bikin struct
struct Player
{
  char name[20];
  int score;
};

int main()
{
  // struct = collection of related members ("variables")
  // they can be of different data types
  // listed under one name i a block of memory
  // VERY SIMILAR to classes in other languages (but no methods/ function)

  // 2. cara akses struct
  struct Player player1; // bikin instance dari Player, dan reusable
  struct Player player2;

  strcpy(player1.name, "sasuke");
  player1.score = 100;

  strcpy(player2.name, "naruto");
  player2.score = 50;

  printf("name: %s, score: %d\n", player1.name, player1.score);
  printf("name: %s, score: %d", player2.name, player2.score);

  return 0;
}
