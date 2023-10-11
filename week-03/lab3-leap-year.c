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
	int start_date = atoi(argv[1]);
  int end_date = atoi(argv[2]);
  for (unsigned int i = start_date; i <= end_date; i++){
    if (i >= start_date) {
      //i % 100 == 0 && i % 400 == 0 || 
     if (i % 4 == 0 && i != 1600 && i != 1700 && i != 1800 && i != 1900 && i != 2000)  {
      printf("%d\n", i);
     } else if (i == 1600 || i == 1700 || i == 1800 || i == 1900 || i == 2000 ) {
      if (i % 400 == 0) {
        printf("%d\n", i);
      }
     }
    }
  }
}
