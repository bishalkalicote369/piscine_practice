#include <stdio.h>

int main()
{
  // float	4 bytes	32 bits	±1.2E-38 to ±3.4E+38 (6-7 decimal places)
  float gpa = 2.91;
  float gb = 22.22;
  float temperature = -10.5;

  printf("your gpa is %.2f\n", gpa); // use .1 .2  to print number after points
  printf("you have %.2f gb data pack left\n", gb);
  printf("outside is very cold i.e temperature is %f\n", temperature);
  return 0;
}