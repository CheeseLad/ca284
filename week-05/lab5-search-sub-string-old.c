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
  char text[strlen(argv[1])];
  char word[strlen(argv[2])];
  strcpy(argv[1], text);
  strcpy(argv[2], word);
  char *pFound = NULL;
  pFound = strstr(text, word);
  printf("%d\n", text[pFound]);
	return 0;
}