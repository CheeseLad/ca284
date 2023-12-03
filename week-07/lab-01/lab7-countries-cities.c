/*
Author: Jake Farrell
Date: 26/10/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct Country Country;
typedef struct City City;

struct City
{
  char name[MAX];
  float size;
};


struct Country
{
  char name[MAX];
  City cities[MAX];
};


/* function prototypes */
float getLargest(Country *c, int *length) {
   float size;
   for (int j = 0; j < *length + 1; j++) {
        if (c->cities[j].size > size) {
          size = c->cities[j].size;
        }
   }
   return size;
}

void printCity(Country *c, int *length, float size) {
  for (int j = 0; j < *length; j++){
      if (size == c->cities[j].size) {
            printf("%s: %s\n", c->name, c->cities[j].name);
          } 
  }
}

void buildCity(Country *c, int *length, char*argv[], int i) {
  int k = i + 1;
  for (int j = 0; j < *length; j++) {
    strcpy(c->cities[j].name, argv[k]);
    c->cities[j].size = atof(argv[k + 1]);
    k = k + 2;
  }
}

/* main function */
int main(int argc, char*argv[])
{
  Country country[MAX];
  int length = argc - 1;
  int l = 0;
  int city_len = 3;
  int *pCity_len = &city_len;
  for (int i = 1; i < length; i = i + ((2 * *pCity_len) + 1)){
      strcpy(country[l].name, argv[i]);
      buildCity(&country[l], pCity_len, argv, i);
      l = l + 1;
  }
  float size = 0;
  for (int i = 0; i < *pCity_len; i++) {
    size = 0;
    size = getLargest(&country[i], pCity_len);
    printCity(&country[i], pCity_len, size);
  }
	return 0;
}
/* other functions */