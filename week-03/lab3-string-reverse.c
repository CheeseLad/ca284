/*
Author: Jake Farrell
Date: 28/09/2023
Description: Reverses a given string and prints it out
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
int getCount(char*nums[]);

/* main function */
int main(int argc, char*argv[])
{


  for (unsigned int i = getCount(argv); i != 0; i--){

  printf("%c", argv[1][i - 1]); // Prints characters starting from end

  }
  printf("\n");
  return 0;  
}
// Function to get the amount of characters used
int getCount(char*nums[]) {
  unsigned int count = 0;

  while(nums[1][count] != '\0') // Stop when encounter null character (end of string)
  {
	  ++count;
  }
  return count;
}
