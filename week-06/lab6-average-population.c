/*
Author: Jake Farrell
Date: 20/10/2023
Description: Reads in a list of countries and then prints them out in a formatted table, also prints out average population
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* struct setup */
typedef struct Country Country;

struct Country // seting up a country struct with 2 chars, a float and an int
{
  char country[100];
  char city[100];
  float population;
  int distance;
};

/* function prototypes */
void print_countries(struct Country *country, int printlen);
void store_country(struct Country *country, char *items[], int length);
void print_average(struct Country *country, int printlen);

/* main function */
int main(int argc, char*argv[])
{
  Country country[50]; // init struct
  int length = argc;
  int printlen = (argc - 1) / 4; // getting length of times the print function needs to be run
  store_country(country, argv, length);
  print_countries(country, printlen);
  print_average(country, printlen);
	return 0;
}

void print_countries(struct Country *country, int printlen) {
  printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n"); // header row in table
  for (int j = 0; j < printlen; j++) {
    printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", country[j].country, country[j].city, country[j].distance, country[j].population);
  }

}

void store_country(struct Country *country, char *items[], int length) {
  int k = 0;
  for (int i = 1; i < length; i = i + 4) { // copying data from command line into struct
      strcpy(country[k].country, items[i]);
      strcpy(country[k].city, items[i + 1]);
      country[k].population = atof(items[i + 2]);
      country[k].distance = atoi(items[i + 3]);
      k++;
    }
}

void print_average(struct Country *country, int printlen) {
  float average = 0.0;
  for (int l = 0; l < printlen; l++) {
    average = average + country[l].population;
  }
  printf("Population average: %.2f\n", average / printlen);
}