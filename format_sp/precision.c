#include<stdio.h>

int main (){
 float myFloatNum1 = 5.99;
float myFloatNum2 = 83.99;
float myFloatNum3 = -53.99;

printf("%+7.2f\n",myFloatNum1);
printf("%+7.2f\n",myFloatNum2);
printf("%+7.1f\n",myFloatNum3);//if we use .1 opt will be rounded

return 0;
}
