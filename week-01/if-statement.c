/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>
/*
Function: Main
Parameters: none
returns: int
description: Get 2 input interger from command-line, add them up and print out the result
*/

int main(int argc, char*argv[])

{

int my_height = 169;                        // Height in cm
int your_height = 175;                      // Heignt in cm

if(your_height > my_height){
  printf("You are taller than me.\n");
}
else if(your_height < my_height){
  printf("I am taller than you.\n");
}
else{
  printf("We are exactly the same height.\n");
}

   return 0;
}