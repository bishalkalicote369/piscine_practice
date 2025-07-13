#include <stdio.h>

int main()
{
  // double	8 bytes	64 bits	±2.3E-308 to ±1.7E+308 (15-16 decimal places)
  double pi = 0.723641723642374; // double store more uptp 15 dig after the .
  printf("the value off pi is %lf\n", pi);

  return 0;
}