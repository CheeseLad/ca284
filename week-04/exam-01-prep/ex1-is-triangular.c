/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int num_input = atoi(argv[1]);
  int number = 0;
  int flag = 0;
  for (unsigned int i = 0; i < num_input + 1; i++) {
    number = number + (i + 1);
    if (num_input == number) {
      flag = 1;
    }
  }
  if (flag == 1) {
      printf("%d %d\n", num_input, number);
    } else {
      printf("No");
    }
	return 0;
}