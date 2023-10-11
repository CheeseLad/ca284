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
  char * token1 = strtok(argv[1], " ");
  char * token2 = strtok(argv[2], " ");
  printf("%d", strcmp(token1, token2));
  unsigned int length;
  length = strlen(token2);
  char reverse[length];
  for (int i = length; i > -1; i--) {
    reverse[i] = token2[i];
    printf("%s\n", reverse);
  }
  
	return 0;
}