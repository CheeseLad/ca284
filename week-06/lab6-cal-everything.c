/*
Author: Jake Farrell
Date: 19/10/2023
Description: Given 2 input numbers, calculate a wide range of mathematical operations
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* function prototypes */
float sum(float, float);
float difference(float, float);
float product(float, float);
float division(float, float);
float power(float, float);
float log_n(float, float);

/* main function */
int main(int argc, char*argv[])
{
	float a = atof(argv[1]); // assinging numbers to floats
	float b = atof(argv[2]);
	float result = 0.0; // result num
	float (*pfunction)(float, float); // using a pointer to refer to a function

	pfunction = sum; // whatever value is here, the function will be called
	result = pfunction(a, b);
	printf("%.2f\n", result);

	pfunction = difference;
	result = pfunction(a, b);
	printf("%.2f\n", result);

	pfunction = product;
	result = pfunction(a, b);
	printf("%.2f\n", result);

	pfunction = division;
	result = pfunction(a, b);
	printf("%.2f\n", result);

	pfunction = power;
	result = pfunction(a, b);
	printf("%.2f\n", result);

	pfunction = log_n;
	result = pfunction(a, b);
	printf("%.2f\n", result);

	return 0;
}

/* operator function */
float sum(float x, float y)
{
	return x + y;
}
float difference(float x, float y)
{
	return x - y;
}
float product(float x, float y)
{
	return x * y;
}
float division(float x, float y)
{
	return x / y;
}
float power(float x, float y)
{
	return pow(x, y); // math.h include needed for this
}
float log_n(float x, float y)
{
	return logf(x) + logf(y); // math.h include needed for this
}