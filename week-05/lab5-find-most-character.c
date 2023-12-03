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
int checkCount(int count, int result_int, int result_char, char*argv[], int i) {
  if (count > result_int) {
      if (*(*(argv+1)+i) != 32) {
        result_int = count;
        result_char = *(*(argv+1)+i);
      }    
    }
    printf("%c", result_char);
    return result_char;
}

/* main function */
int main(int argc, char*argv[])
{
  int length = strlen(argv[1]);
  int result_int;
  char result_char;
  for (int i = 0; i < length; i++) {
    int count = 0;
    for (int j = 0; j < length; j++) {
      if (argv[1][i] == argv[1][j]) {
        count++;
      }
    }
    result_char = checkCount(count, result_int, result_char, argv, i);
  }
  printf("%c\n", result_char);
	return 0;
}