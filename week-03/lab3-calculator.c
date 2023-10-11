/*
Author: Jake Farrell
Date: 28/09/2023
Description: Program to calculate the product or division of two floating numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
float multiply(float n1, float n2);
float divide(float n1, float n2);

/* main function */
int main(int argc, char*argv[])
{
  // Store the operation type
  char * stringvar = argv[1];
  // Checking for invalid calculation
  if(atof(argv[3]) == 0.0) {
    printf("invalid\n");
  } else if (strcmp(stringvar, "multiply") == 0) // check if input matches operation
  { // Calculate and print out multiplication
    double calResult = multiply(atof(argv[2]), atof(argv[3]));
    printf("%lf\n", calResult);
	  return 0;

  } else if (strcmp(stringvar, "divide") == 0) // check if input matches operation
  {// Calculate and print out division
    double calResult = divide(atof(argv[2]), atof(argv[3]));
    printf("%lf\n", calResult);
	  return 0;
  }
  
}

// Function to multiply the 2 numbers together
float multiply(float n1, float n2) {
  float result = n1 * n2;
  return result;
}

// Function to divide the 2 numbers together
float divide(float n1, float n2) {
    float result = n1 / n2;
    return result;
}