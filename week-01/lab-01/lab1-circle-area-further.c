/*
 lab1-circle-area-further.c
 author Jake Farrell
 */

/* includes*/
#include <stdio.h>
#include <stdlib.h> /* contains functions we may need*/

#define PI 3.14 /*Defining PI as a constant*/

/* Function: Main
 parameters: int argc (argument count)
 char *argv[] an array of command-line arguments
description:  Takes a single argument and computes area of circle
 */

int main(int argc, char *argv[])
{
	int radius = 0;
	float area = 0.0;
	radius = atoi(argv[1]);
	if(radius <= 0){
		printf("Please enter a number greater than zero: \n");
		scanf("%d", &radius);
	} else {


	radius = radius*radius; /* radius squared */

	area = radius*PI; /* calculate area of circle */

    /* print to two decimal places*/
    //printf("%.2f\n",area); /* We only want to show only two values to the right of the decimal point*/
     printf("%.2f\n",area); /* We want to set the width of the shown number = 9. If the total number of digits < 9, spaces will be shown before the number*/
   }
    return (0);
} /