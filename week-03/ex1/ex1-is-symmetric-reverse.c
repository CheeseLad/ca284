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
  char reverse[argc];
  unsigned int length;
  length = strlen(argv[1]);
  printf("%s\n", argv[1]);
  for (int i = length; i > -1; i--) {
    reverse[i] = argv[1][i];
    printf("%c", argv[1][i]);
    
  }
	return 0;
}