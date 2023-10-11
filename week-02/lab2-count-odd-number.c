/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ /* Begin Function */
int length = argc;
int numbers[argc]; /* Setting up array to store data */
int count = 0;
for (unsigned int i = 1; i < argc; i++){
  numbers[i] = atoi(argv[i]);
  if (numbers[i] % 2 != 0){ /* Checking if number is odd and then adding it to the count if it is */
    count = count + 1;
  }
}
printf("%d\n", count);
return 0;
} /* End function and program*/