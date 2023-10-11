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
  char forward[50];
  int length = sizeof(argv[1]);
  for (unsigned int i = 0; i < length ; i++){
    forward[i] = argv[1][i];
  }
  forward[length] = '\0';
  printf("%s\n", forward);

  char backward[50];
  int length2 = sizeof(argv[1]) - 1;
  unsigned int j = 1;
  for (unsigned int k = length2 - 1; k > 0; k--){
    backward[j] = argv[1][k];
    printf("%c %d\n", backward[j], j);
    j++;
  }
  backward[length2] = '\0';
  //printf("%s\n", backward);
	return 0;
}