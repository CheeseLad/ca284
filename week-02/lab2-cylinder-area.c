/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ /* Begin Function */
  float pi = 3.1415; /* Set value of PI */
  /* Following 3 if statements check for obscure values */
  if (argc == 1) {
    printf("No input given!");
  }
  else if (argc == 2) {
    printf("Two arguments needed!");
  }
  else if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0) {
    printf("The radious or height cannot be negative!");
  }
  else {
  
    /* Getting data from command-line arguments*/
    float radius = atof(argv[1]);
    float height = atof(argv[2]);

    float area = (2.0 * pi * radius) * (radius + height); /* Formula for calculating the cylinder area */
    printf("%.2f\n", area);
  }
  return 0;
} /* End function and program */ 
