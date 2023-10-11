/*
Author: Jake Farrell
Date: 28/09/2023
Description: Uses selection sort to convert an array of numbers into increasing order
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
void selectionSort(int numbers[], int length);

/* main function */
int main(int argc, char*argv[])
{ // Setting up variables
  int numbers[argc];
  int length = argc;
  // Building numbers array
  for(unsigned int i = 0; i < length; i++) {
    numbers[i] = atoi(argv[i]);
  }
  selectionSort(numbers, length);
  // Printing out numbers one per line
  for(unsigned int l = 0; l < length - 1; l++) {
    printf("%d\n", numbers[l + 1]);
  }
	return 0;
}

void selectionSort(int numbers[], int length) {
 for (unsigned int i = 0; i < length; i++) {
    for (unsigned int j = 0; j < length; j++) {
      // checking if number is less than the other
      if (numbers[i] < numbers[j]) {
        // number swapping if true
        int temp;
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
}