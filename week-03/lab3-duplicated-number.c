/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int find_duplicate(int numbers[], int argc);

/* main function */
int main(int argc, char*argv[])
{
  int numbers[argc];
  for(int i = 1; i < argc; i++) {
    numbers[i] = atoi(argv[i]);
  }
  int result = find_duplicate(numbers, argc);
  if (result > 0){
    printf("%d\n", result);
  } else {
    printf("no duplicated number\n");
  }
  
  return 0; 
}

int find_duplicate(int numbers[], int argc) {
  for(int j = 0; j < argc; j++) {
  int count = 0;
    for(unsigned int k = 1; k < argc; k++) {
      if (numbers[j] == numbers[k]) {
        count++;
      }
      if (count > 1) {
        return numbers[j];
      }
  }
  }
  return -1;
}
