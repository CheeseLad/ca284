/*
Author: Jake Farrell
Date: 12/10/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */

/* main function */
int main(int argc, char*argv[])
{
  int size_one_m = atoi(argv[1]);
  int size_one_n = atoi(argv[2]);
  int matrix_one[size_one_m][size_one_n];
  int k = 3;
  for (int i = 0; i < size_one_m; i++) {
    for (int j = 0; j < size_one_n; j++) {
      matrix_one[i][j] = atoi(argv[k]);
      k++;
    } 
  }

  int size_two_m = atoi(argv[k]);
  k++;
  int size_two_n = atoi(argv[k]);
  k++;
  int matrix_two[size_two_m][size_two_n];
  
  for (int i = 0; i < size_two_m; i++) {
    for (int j = 0; j < size_two_n; j++) {
      matrix_two[i][j] = atoi(argv[k]);
      k++;
    } 
  }

  int matrix_final[size_one_m][size_two_n];
  for (int o = 0; o < size_one_m; o++) {
    for (int l = 0; l < size_two_n; l++) {
      int sum = 0;
      for (k = 0; k < size_one_m; k++) {
        sum = sum + (matrix_one[o][k] * matrix_two[k][l]);
      }
      matrix_final[o][l] = sum;
    }
  }

  for (int p = 0; p < size_one_m; p++) {
    for (int q = 0; q < size_two_n; q++) {
      printf ("%d", matrix_final[p][q]);
      if (q <size_two_n - 1) {
        printf(" ");
      }
    }
    printf("\n");
  }
	return 0;
}