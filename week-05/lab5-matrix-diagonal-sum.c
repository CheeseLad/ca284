/*
Author: Jake Farrell
Date: 12/10/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
  int sum_matrix(int (*pMatrix)[250], int size) {
    int sum = 0;
    int *pSum = &sum;
    for (int l = 0; l < size; l++) {
      *pSum = *pSum + *(*(pMatrix+l)+l);
      printf("%p\n", pSum);
    }
    printf("%d\n", *pSum);
	  return 0;
  }

/* main function */
int main(int argc, char*argv[])
{
  int size = atoi(argv[1]);
  int matrix[size][size];
  int (*pMatrix)[size] = matrix;
  int k = 2;
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++) {
      *(*(pMatrix+i)+j) = atoi(argv[k]);
      k++;
    } 
  }
  sum_matrix(pMatrix, size);
}