/*
Author: Jake Farrell
Date: 12/10/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>

/* main function */
int main(int argc, char*argv[])
{
  float a[] = {1,2,3,4,5,6};
  float value = -999;
  int pos = -999;
  int length = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < length; i++) {
    if (a[i] > value) {
      value = a[i];
      pos = i;
    }
  }
  printf("%.2f %d\n", value, pos);
	return 0;
}