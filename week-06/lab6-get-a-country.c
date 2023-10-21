/*
Author: Jake Farrell
Date: 20/10/2023
Description: Reads data from the command line and prints it out
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* function prototypes */
void print_country(char *items[]);

/* main function */
int main(int argc, char*argv[])
{
  print_country(argv);
	return 0;
}

void print_country(char *items[]) { // function to print out country, given the command line arguments
  printf("%s\n", items[1]);
  printf("%s\n", items[2]);
  printf("%.2f million people\n", atof(items[3]));
  printf("%d km2\n", atoi(items[4]));
}