/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>
/*
Function: Main
Parameters: int a country calling code
returns: int
description: Prints out the country of a given calling code
*/

int main(int argc, char*argv[])
{ 
  int width = atoi(argv[1]);
  int height = atoi(argv[2]);
  for (int i = 0; i < width; ++i) {
    printf("*");
  }
  for (int i = 0; i < height - 2; ++i) {

    printf("\n*");
    for (int i = 0; i < width - 2; ++i) {
      printf(" ");
    }
      printf("*");
    }
    printf("\n");
     for (int i = 0; i < width; ++i) {
      printf("*");
  }
    return 0;
} /* End function and program*/