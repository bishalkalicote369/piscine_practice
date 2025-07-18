#include <stdio.h>
#include <string.h>

int main()
{

  char fullName[30];
  int age;

  // getchar();
  printf("Type your full name: ");
  fgets(fullName, sizeof(fullName), stdin);
  fullName[strlen(fullName) - 1] = '\0';

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Hello %s\n", fullName);
  printf("%d is my age\n", age);

  return 0;
}