/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ /* Begin Function */
  int length = atoi(argv[1]); /* Reading from arguments */
  for (unsigned int i = 0; i < atoi(argv[1]); i++) { /* Top of square */
    printf("*");
  }
  printf("\n");
  for (unsigned int i = 0; i < atoi(argv[1]) - 2; i++){

  for (unsigned int i = 0; i < atoi(argv[1]); i++){
    if ((i == 0) || (i == atoi(argv[1]) -1)) { /* Printing "*" only if it is at the start and end of the shape line */
      printf("*");
    }
    else {
      printf(" ");
    }
  }
  printf("\n");
  }
    for (unsigned int i = 0; i < atoi(argv[1]); i++) { /* Bottom of square */
    printf("*");
  }
  printf("\n");
    return 0;
} /* End function and program*/