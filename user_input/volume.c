#include <stdio.h>

int main()
{
  int length, breadth, height, volume;

  printf("Enter the length, breadth and height : ");
  scanf("%d %d %d", &length, &breadth, &height);

  volume = length * breadth * height;
  printf("The volume of given rectangle is %d \n", volume);
  return 0;
}