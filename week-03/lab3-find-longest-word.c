/*
Author: Jake Farrell
Date: 29/09/2023
Description: Finds the longest word in a string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* function prototypes */
char find_longest(char string[]);

/* main function */
int main(int argc, char*argv[])
{
  char * string_input = argv[1];
  printf("%c\n", find_longest(string_input));
  return 0;
}

char find_longest(char string[]) {
  int longest = 0;
  char * longest_token;
  char * token = strtok(string, " ");
  while (token != NULL) {
    if (strlen(token) > longest) {
      longest = strlen(token);
      longest_token = token;
    }
    token = strtok(NULL, " ");
  }
  return longest_token;
}
