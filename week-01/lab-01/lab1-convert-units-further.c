/*
Program: lab1-convert-units-further.c
Author: Jake Farrell
Input: Centimetres
Output: Print out the result with 2 digits after decimal point
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */

int main(int argc, char * argv[])
{
   float i = 30.0;
   while (i <= 49) {
      printf("%.2f %.2f %.2f %.2f %.2f\n", (i) / 2.54, (i + 1) / 2.54, (i + 2) / 2.54, (i + 3) / 2.54, (i + 4) / 2.54);
      i = i + 5;
   }
   return(0);
}