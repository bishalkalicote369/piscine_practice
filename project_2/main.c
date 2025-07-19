#include <stdio.h>
#include <string.h>

int main()
{
  // mad libs game

  char adjective_1[30] = "", adjective_2[30] = "", adjective_3[30] = "";
  char noun[30] = "";
  char verb[30] = "";

  printf("Enter an adjective (description): ");
  fgets(adjective_1, sizeof(adjective_1), stdin);

  printf("Enter a noun (animal or person): ");
  fgets(noun, sizeof(noun), stdin);

  printf("Enter an adjective (description): ");
  fgets(adjective_2, sizeof(adjective_2), stdin);

  printf("Enter a verb (-ing): ");
  fgets(verb, sizeof(verb), stdin);

  printf("Enter an adjective (description): ");
  fgets(adjective_3, sizeof(adjective_3), stdin);

  printf(" It was a %s morning when I found a %s %s in my backyard. It looked so %s that I couldn’t stop %s.knew then that it was going to be a very unusual day.", adjective_1, adjective_2, noun, adjective_3, verb);

  return 0;
}