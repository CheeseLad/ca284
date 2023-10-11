/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int searchNum(int numbers[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int numbers[argc];
  int number = atoi(argv[1]);
  for (unsigned int i = 2; i < argc; i++){
    numbers[i] = atoi(argv[i]);
  }
  int trigger = 0;
  for (unsigned int i = 2; i < argc; i++){
    if(numbers[i] == number){
      printf("Found %d at %d\n", numbers[i], i - 2);
      trigger = 1;
    }
  }
  if (trigger == 0) {
    printf("%d not found\n", number);
  }
	return 0;
}
