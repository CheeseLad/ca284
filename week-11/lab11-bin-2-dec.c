/*
Author: Jake Farrell
Date: 26/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
    float numbers[argc];
    int length = argc - 1;
    int k = 0;
    for (unsigned int i = length; i > 0; i--) {
      numbers[k] = atof(argv[i]);
      if (strcmp(argv[i], "0") != 0 & strcmp(argv[i], "0") != 1) {
        printf("Only digits 1 and 0 are permitted.\n");
        return 0;
      }
      k++;
    }
    float sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        if (numbers[i] == 1) {
          sum = sum + pow(2, i);
        }
      }
      if (argc >= 10) {
        printf("Too many binary digits entered.\n");
        return 0;
      } else {
      printf("%.0f\n", sum);
      return 0;
      }
      
	    
  
}

/* other functions */