/*
Author: Jake Farrell
Date: 9/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
void swap(float *a, float *b);
void bubbleSort(float *array, int *n);

/* main function */
int main(int argc, char*argv[])
{
  int length = argc - 1;
  int check = 0;
  float *pValues = calloc(length, sizeof(float));
  if(!pValues)
{
    //Do something if failed to allocate memory, e.g.:
    printf("Not enough memory!");
    exit(0);
}
  float *pProcessed= calloc(length, sizeof(float));
  if(!pProcessed)
{
    //Do something if failed to allocate memory, e.g.:
    printf("Not enough memory!");
    exit(0);
}
  for (unsigned int i = 0; i < length; i++) {
      *(pValues+i) = atof(argv[i + 1]);  
  }
  bubbleSort(pValues, &length);
  int k = 0;
  for (unsigned int i = 0; i < length; i++) {
    if (*(pValues+i) != *(pValues+i+1)) {
     *(pProcessed+k) = *(pValues+i);
     k++;
    }
    
  }
  printf("%.1f\n", *(pProcessed+1));
  free(pProcessed);
  pProcessed = NULL;
  free(pValues);
  pValues = NULL;
	return 0;
}

/* other functions */

void swap(float *a, float *b)
{
    float temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(float *array, int *n)
{
    for (int i = 0; i < *n - 1; i++) {
        for (int j = 0; j < *n - i - 1; j++) {
            if (*(array + j) < *(array + j + 1)) {
              swap(&*(array + j), &*(array + j + 1));
            }
        }
    }
}