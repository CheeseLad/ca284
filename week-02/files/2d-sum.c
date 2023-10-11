/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>
/*
Function: Main
Parameters: int a country calling code
returns: int
description: Prints out the country of a given calling code
*/

int main(int argc, char*argv[])
{ /* Begin Function */
  int numbers2D[3][4] = { /* A 2D array with 3 rows and 4 columns */
	{1,2,3,4},  /* value for first row */
	{5,6,7,8},  /* value for second row */
	{4,5,6,7}   /* value for third row */
};
int sum = 0
for (unsigned int i = 0; i < 3; i++){
  for (unsigned int j = 0; j < 4; j++){
    sum += numbers2D[i][j]
  }
}

    return 0;
} /* End function and program*/