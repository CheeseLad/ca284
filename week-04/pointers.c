/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* main function */
int main(int argc, char*argv[])
{
  int number = 15;
  printf("Number: %d\n", number);
  printf("Address of the variable number: %p\n", &number);

  int *pointer = &number; // Don't leave this blank, will point to a random data, use NULL if you want to leave it blank

  printf("Address of the variable number using pointer: %p\n", pointer);
	return 0;
}