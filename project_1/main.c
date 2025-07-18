#include <stdio.h>
#include <string.h>

int main()
{
  char item[30] = "";
  int quantity = 0;
  float price = 0.0f;
  float total_price = 0.0f;

  printf("What item would you like to buy?: ");
  fgets(item, sizeof(item), stdin);
  item[strcspn(item, "\n")] = '\0'; // safer way to remove newline

  printf("What is the price for each: ");
  scanf("%f", &price);

  printf("How many would you like?: ");
  scanf("%d", &quantity);

  total_price = price * quantity;

  printf("You have bought %d %s\n", quantity, item);
  printf("The total price is: %.2f\n", total_price);

  return 0;
}
