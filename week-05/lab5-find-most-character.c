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
  
  int length = strlen(argv[1]);
  int result_int;
  char space[] = " ";
  char result_char;
  for (int i = 0; i < length; i++) {
    int count = 0;
    for (int j = 0; j < length; j++) {
      if (argv[1][i] == argv[1][j]) {
        count++;
      }
    }
    if (count > result_int) {
      char *str1 = argv[1][i];
      if (strcmp(str1, space) == 0) {
        result_int = count;
        result_char = argv[1][i];
      }
    }
    
  }
  printf("%c\n", result_char);
	return 0;
}