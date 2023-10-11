/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int numbers[argc - 1];
  unsigned int i = 1;
  for(i = 1; i < argc; i++) {
    numbers[i] = atoi(argv[i]);
  }
  int length = sizeof(numbers);
  bubbleSort(numbers, length);
  for(int i = 0; i < length; i++) {
    printf("%d\n", numbers[i]);
  }
	return 0;
}