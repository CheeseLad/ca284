/*
Program: lab1-rugby.c
Author: Jake Farrell
Input: Try, Conversion, Penalty, Drop-goal
Output: Prints out the total number of points
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */

int main(int argc, char * argv[])
{
   int try, conversion, penalty, drop_goal;
   try = atoi(argv[1]) * 5;
   conversion = atoi(argv[2]) * 2;
   penalty = atoi(argv[3]) * 3;
   drop_goal = atoi(argv[4]) * 3;
   printf("%d\n", try + conversion + penalty + drop_goal);
   return(0);
}