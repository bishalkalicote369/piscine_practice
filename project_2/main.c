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
  adjective_1[strcspn(adjective_1, "\n")] = 0; // remove newline

  printf("Enter a noun (animal or person): ");
  fgets(noun, sizeof(noun), stdin);
  noun[strcspn(noun, "\n")] = 0;

  printf("Enter an adjective (description): ");
  fgets(adjective_2, sizeof(adjective_2), stdin);
  adjective_2[strcspn(adjective_2, "\n")] = 0;

  printf("Enter a verb (-ing): ");
  fgets(verb, sizeof(verb), stdin);
  verb[strcspn(verb, "\n")] = 0;

  printf("Enter an adjective (description): ");
  fgets(adjective_3, sizeof(adjective_3), stdin);
  adjective_3[strcspn(adjective_3, "\n")] = 0;

  printf("\nIt was a %s morning when I found a %s %s in my backyard. ", adjective_1, adjective_2, noun);
  printf("It looked so %s that I couldn’t stop %s. ", adjective_3, verb);
  printf("I knew then that it was going to be a very unusual day.\n");

  return 0;
}
