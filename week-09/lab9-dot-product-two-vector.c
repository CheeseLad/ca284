/*
Author: Jake Farrell
Date: 9/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int *pMatrix = NULL;
  int *pDot_product = NULL;
  int n = atoi(argv[1]);
  int length = argc - 1;
  int dot_product = 0;
  pMatrix = (int*)malloc(length*(sizeof(int)));
  if(!pMatrix)
    {
        //... Code to deal with memory allocation failure, for example:
        printf("Failed to allocate memory!");
        return 0;
    }
  for (unsigned int i = 0; i < length - 1; i++) {
    *(pMatrix+i) = atoi(argv[i + 2]);
  }
    for (unsigned int i = 0; i < n; i++) {
        dot_product = dot_product + (*(pMatrix+i) * *(pMatrix+i+n));
  }
  printf("%d\n", dot_product);
  free(pMatrix);
  pMatrix = NULL;
	return 0;
}

/* other functions */