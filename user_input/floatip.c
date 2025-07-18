#include <stdio.h>

int main()
{
  float price1, price2;
  float total;

  printf("Enter a floating point number:");
  scanf("%f %f", &price1, &price2);

  total = price1 + price2;

  printf("THe total price is %.2f\n", total);

  return 0;
}
