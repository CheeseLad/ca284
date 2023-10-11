/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int selection_sort(int nums[], int length);
void swap(int *xp, int *yp);

/* main function */
int main(int argc, char*argv[])
{
  int numbers[argc];
	for (unsigned int i = 1; i < argc; i++){
    numbers[i] = atoi(argv[i]);
  }
  printf("%d", selection_sort(numbers, sizeof(numbers)));
  return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int selection_sort(int nums[], int length) {
  int i, j, minimum;
  for (i = 0; i < length; i++) 
  {
    minimum = i;
    for (j = i+1; j < minimum; j ++)
      if (nums[j] < nums[minimum])
        minimum = j;
      
       if (minimum != i)
        swap(&nums[minimum], &nums[i]);
  }
  return * nums;
}
