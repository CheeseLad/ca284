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
  int numbers[argc];
  int even = 0;
  int odd = 0;
  for (unsigned int i = 1; i < argc - 1; i++) {
    numbers[i] = atoi(argv[i]);
    if (numbers[i] % 2 != 0) {
      odd += numbers[i];
    } else if (numbers[i] % 2 == 0)
    {
      even -= numbers[i];
      printf("%d\n", numbers[i]);
    }
  }
  printf("%d\n", odd);
  printf("%d\n", even);
	return 0;
}