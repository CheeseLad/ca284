/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int length = strlen(argv[1]);
  for (unsigned int i = 0; i < length; i++) {
    printf("%c\n", argv[1][i]);
  }
	return 0;
}