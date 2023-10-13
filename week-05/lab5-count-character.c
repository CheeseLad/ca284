/*
Author: Jake Farrell
Date: 12/10/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int count = 0;
  int length = strlen(argv[2]);
  for (int i = 0; i < length; i++) {
    if (argv[1][0] == argv[2][i]) {
      count++;
    }
  }
  printf("%d\n", count);
	return 0;
}