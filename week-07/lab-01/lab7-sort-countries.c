/*
Author: Jake Farrell
Date: 26/10/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Country Country;

struct Country
{
  char country[100];
  char capital[100];
  float population;
  int size;
};

/* function prototypes */
void buildCountry(Country country[], char *items[], int len);
void sortCountry(Country country[], int len, int (*pSmall));
void printCountry(Country country[], int len, float numbers[]);
void selectionSort(float numbers[], int length);

/* main function */
int main(int argc, char*argv[])
{
  Country country[50];
  int length = argc - 1;
  buildCountry(country, argv, length);  
  int small[100];
  int (*pSmall) = small;
  sortCountry(country, length, pSmall);
	return 0;
}

/* other functions */
void buildCountry(Country country[], char *items[], int len) {
  int j = 0;
  for (int i = 1; i < len; i = i + 4) {
    strcpy(country[j].country, items[i]);
    strcpy(country[j].capital, items[i + 1]);
    country[j].population = atof(items[i + 2]);
    country[j].size = atoi(items[i + 3]);
    j++;
  }
}

void sortCountry(Country country[], int len, int (*pSmall)) {
  float numbers[100];
  for (int i = 0; i < len / 4; i++) {
    numbers[i] = country[i].population;
  }
  selectionSort(numbers, len / 4);
  printCountry(country, len, numbers);
}

void printCountry(Country country[], int len, float numbers[]) {
  printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
  for (int j = 0; j < len / 4; j++){
    for (int i = 0; i < len / 4; i++) {
      if (numbers[j] == country[i].population) {
        printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", country[i].country, country[i].capital, country[i].size, country[i].population);
      } 
    } 
  }
}

void selectionSort(float numbers[], int length) {
  for (unsigned int i = 0; i < length; i++) {
    for (unsigned int j = 0; j < length; j++) {
     // checking if number is less than the other
     if (numbers[i] > numbers[j]) {
        // number swapping if true
        float temp;
        temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
}