#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool stockfull = false;
  bool nostock = true;
  if (stockfull)
  {
    printf("you dont have to order");
  }
  else
  {
    printf("we have to order");
  }
  return 0;
}
