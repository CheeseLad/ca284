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
  int string_length = strlen(argv[1]);
  int word_length = strlen(argv[2]);
  int k = 0;
  int l = 0;
  int start = 0;
  for (int i = 0; i < string_length; i ++) {
    if (argv[1][i] == argv[2][k]) {
      start = i;
      k++;
      l = i + 1;
      while (k < word_length) {
        if (argv[1][l] == argv[2][k]) {
          l++;
          k++;
        }
      }
    }
  }
  if (k == word_length) {
    printf("%d %d\n", start, l - 1);
  }
}