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
  int n = atoi(argv[1]);
  printf("%d", n);
  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (n * 3) + 1;
    }
    printf(" %d", n);
  }
  printf("\n");
	return 0;
}