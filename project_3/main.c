#include <stdio.h>

int main()
{
  // calculate simple intrest
  float amount = 0.0f, intrest_rate = 0.0f, time = 0.0f, simple_intrest = 0.0f;

  printf("Enter the principle amount");
  scanf("%f", &amount);

  printf("Enter the intrest rate in percent ");
  scanf("%f", &intrest_rate);

  printf("Enter the time in year");
  scanf("%f", &time);

  simple_intrest = amount * intrest_rate * time / 100;
  printf("the simple intrest of %f with %f rate within %f year is %f", amount, intrest_rate, time, simple_intrest);
  return 0;
}