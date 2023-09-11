/* Include standard input and output */
#include <stdio.h>
/*
Function: Main
Parameters: none
returns: int
description: Declare and print out some variables with different types
*/

int main(int argc, char*argv[])

{

   int age = 35;
   float height = 1.75f;
   char initial = 'T';
   char first_name[] = "Tai";

   printf("Hello, I am %d years old\n", age);
   printf("Height: %f\n", height);
   printf("Initial: %c\n", initial);
   printf("First Name: %s\n", first_name);

   float monthlySalary = 3000;
   double annualSalary;

   annualSalary = monthlySalary*12;

   printf("My monthly salary is: %f\n", monthlySalary);
   printf("My annual salary is: %f\n", annualSalary);
   return 0;
}