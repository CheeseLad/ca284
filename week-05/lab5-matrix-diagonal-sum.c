/*
Author: Jake Farrell
Date: 12/10/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
void calculate_sum(int matrix[size][size], int size, int *sum);

/* main function */
int main(int argc, char*argv[])
{
  int size = atoi(argv[1]);
  int matrix[size][size];
  int k = 2;
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++) {
      matrix[i][j] = atoi(argv[k]);
      k++;
    } 
  }
  int *sum = 0;
  printf("%d\n", calculate_sum(matrix[size][size], size, &sum));
	return 0;
}

void calculate_sum(int matrix[size][size], int size, int *sum) {
for (int l = 0; l < size; l++) {
    sum = sum + matrix[l][l];
  }
}