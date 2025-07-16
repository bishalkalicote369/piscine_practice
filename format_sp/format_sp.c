#include<stdio.h>

int main(){
/*
 Format Specifiers in C
 ------------------------
 Format specifiers are used in printf(), scanf(), etc., to define the type 
 and format of data being printed or read.

 Basic Specifiers:
   %d   - int
   %u   - unsigned int
   %f   - float
   %lf  - double
   %c   - char
   %s   - string
   %x   - hexadecimal (lowercase)
   %X   - hexadecimal (uppercase)
   %o   - octal
   %%   - print %

 Optional Modifiers:
   Width:
     %5d   - minimum 5 characters wide (right aligned)
     %-5d  - left aligned within 5 characters

   Precision (for floating points or strings):
     %.2f   - 2 digits after decimal
     %6.2f  - 6 characters wide, 2 digits after decimal
     %.3s   - print only first 3 characters of a string

   Flags:
     %-   - left align the output
     %+   - force sign (+/-) in numbers
     %0   - pad with leading zeros
     #    - use prefix (0x for hex, 0 for octal)

 Examples:
   printf("%+08.2f", 123.456);  // Output: +0123.46
   printf("%-10s", "Hello");    // Output: Hello____ (5 spaces)
*/
int age = 20;
float price = 20.99;
double  pi = 3.118766456457;
char  currency = '$';
char name[] = "bishal kalicote";

printf(" %d\n", age);
printf(" %f\n", price);
printf(" %lf\n", pi);
printf(" %c\n", currency);
printf(" %s\n", name);

int num1 = 1;
int num2 = 10;
int num3 = 100;
int num4 = 1000;
int num5 = 100;
int num6 = 10;
int num7 = 1;
printf("%-4d\n",num1);
printf("%-3d\n",num2);
printf("%-2d\n",num3);
printf("%-1d\n",num4);
printf("%3d\n",num5);
printf("%2d\n",num6);
printf("%1d\n",num7);



return 0;
}

