#include <stdio.h>

int main()
{
  // variable is a reusable container for a value
  // behaves as if it were the value it contains
  //int	4 bytes	32 bits	-2,147,483,648 to 2,147,483,647
  int age = 20;
  int year = 2005;
  int saving_money = 2500;
  printf("you are %d years old\n", age);
  printf("you are born on %d year\n", year);
  printf("i have %d rupees on my saving account\n", saving_money);
  printf("you are %d years old \n you are born on %d year \n i have %d rupees on my saving account\n  ", year, age, saving_money);
  return 0;
}
