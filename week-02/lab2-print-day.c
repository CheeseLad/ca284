/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{ /* Begin Function */
int day = atoi(argv[1]); /* Assigns command-line arguments */
switch (day) /* Switch statement to convert each number to a specific day */
{
case 1:
  printf("Sunday\n");
  break;
case 2:
  printf("Monday\n");
  break;
case 3:
  printf("Tuesday\n");
  break;
case 4:
  printf("Wednesday\n");
  break;
case 5:
  printf("Thursday\n");
  break;
case 6:
  printf("Friday\n");
  break;
case 7:
  printf("Saturday\n");
  break;
default:
  break;
}
  return 0;
} /* End function and program*/