/* Include standard input and output */
#include <stdio.h>
/*
Function: Main
Parameters: none
returns: int
description: Get 2 input interger from keyboards, add them up and print out the result
*/

int main(int argc, char*argv[])

{

   float number1;
   float number2;
   float result;

   printf("Enter the first number: \n");
   scanf("%f", &number1);
   printf("Enter the second number: \n");
   scanf("%f", &number2);

   // number1 = 5;
   // number2 = 6;
   result = number1 + number2;

   printf("Sum of %f and %f is %f\n.", number1, number2, result);

   return 0;
}