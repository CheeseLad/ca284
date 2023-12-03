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

void get_count(char *letter[], char *word[], int length) {
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (atoi(*letter) == *word[i]) {
      count++;
      printf("%d", count);
    }
    printf("%d %s %d", count, *letter, *word[i]);
  }
}

/* main function */
int main(int argc, char*argv[])
{
  char letter = *argv[1];
  char word = argv[2];
  
  int length = strlen(word);
  get_count(&letter, word, length);
	return 0;
}

