/*
Program: lab1-hello-again-further.c
Author: Jake Farrell
Input: A full name
Output: Print out the given name
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */

int main(int argc, char * argv[])
{
   char input_name[100];
   printf("Enter your name: \n");
   scanf("%s", input_name);
   printf("Hello \n%s\n", input_name);
   /* 
   \n = Newline
   \t = Tab
   \e = Escape Character
   \b = Backspace
   */
   return(0);
}