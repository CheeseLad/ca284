/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  int inputArray[3] = {1,2,3};
int* pFirstElement = &inputArray[0];

printf("The address of the first element is: %p\n", pFirstElement);
printf("The address obtained from the array name inputArray is %p\n", inputArray);
printf("The value of the first element is %d\n", *pFirstElement);
printf("The value of the first element is %d\n", *(pFirstElement + 2));


int matrix[3][3] = {
                   {10,20,30},
                   {40,50,60},
                   {70,80,90}
                 };

printf("matrix[1][2]: %d\n", matrix[1][2]); /* the normal way */
printf("*(matrix[1]+2): %d\n", *(matrix[1]+2)); /* pointer and array */
printf("*(*(matrix + 1)+2): %d\n", *(*(matrix + 1)+2)); /* using pointer only */
printf("*(*matrix + 5): %d\n", *(*matrix + 5)); /* using pointer only */
	return 0;
}