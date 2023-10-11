/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int searchNum(int numbers[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int number = atoi(argv[1]);
  for (unsigned int i = 1; i < argc; i++){
    printf("%d\n", atoi(argv[i]));
    if (number == atoi(argv[i])){
      print("Found %d at %d",)
    }
  }
  printf("%d", number);
	return 0;
}