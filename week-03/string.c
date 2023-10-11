/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ /* Begin Function */
  char str[] = "the brown fox jumped over the lazy dog";
unsigned int count = 0;

while(str[count] != '\0')
{
	++count;
}

printf("The length of the string \"%s\" is %d characters.\n", str, count);
  
  return 0;
} /* End function and program */ 
