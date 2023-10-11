/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ /* Begin Function */
int numbers[argc];
int count = 0;
for (unsigned int i = 1; i < argc; i++){
  numbers[i] = atoi(argv[i]);
  if (numbers[i] % 2 == 0){
    count = count + 1;
  }
}

if (count > 0){
  for (unsigned int i = 1; i < argc; i++){
   numbers[i] = atoi(argv[i]);
   if (numbers[i] % 2 == 0){
     printf("%d - %d\n", i - 1, numbers[i]);
   }
  }
} else {
  printf("Not found!\n");
}

return 0;
} /* End function and program*/