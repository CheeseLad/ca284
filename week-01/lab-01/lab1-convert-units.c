/*
Program: lab1-convert-units.c
Author: Jake Farrell
Input: Centimetres
Output: Print out the result with 2 digits after decimal point
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */

int main(int argc, char * argv[])
{
   float num;
   num = atof(argv[1]);
   printf("%.2f\n", num / 2.54);
   return(0);
}