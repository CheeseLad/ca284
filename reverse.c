/*
Author: Jake Farrell
Date: 28/09/2023
Description:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
    int length = strlen(argv[1]);
    int k = length - 1;
    
    int j = 0;
    char reverse[100]; 
    strcpy(argv[1], reverse);
    for (j = 0; j < length; j++) {
        reverse[j] = argv[1][k];
        k--;
    }
    //reverse[length] = '\0';
    printf("%s\n", reverse);
    //char temp[100];
    //if (strcmp(reverse, argv[1]) == 0) {
    //    printf("Yes");
    //}
	return 0;
}