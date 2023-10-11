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
    int width;
    int height;
    width = atoi(argv[1]);
    height = atoi(argv[2]);

    for(int i = 0; i < height; ++i) 
    {  
      for(int j = 0; j < width; ++j) {
        printf("*");
      }
      printf("\n");
    }
    return 0;
} /* End function and program*/