/*
Author: Jake Farrell
Date: 26/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

/* type definitions*/
typedef struct Sentence Sentence; 

/* struct definitons */
struct Sentence //Structure type definition
{
	//Define struct members
  char text[MAX];
  char length[MAX];
};

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
    Sentence sentence[MAX];
    FILE *pfile = NULL;
    char *filename = "paragraph.txt";
    pfile = fopen(filename, "r");
    if(!pfile)  // Open myfile.txt to write it
        printf("Failed to open %s.\n", filename);

    long sum = 0;
    int longest = 0;
    long textlen = 1;
    int i = 0;
    while (textlen > 0) {
      fgets(sentence[i].length, MAX, pfile);
      fgets(sentence[i].text, MAX, pfile);
      textlen = strlen(sentence[i].text);
      if (strlen(sentence[i].text) >= sum) {
        sum = strlen(sentence[i].text);
        longest = i;
      }
      i++;
      
    }
    printf("%ld\n%s\n", sum, sentence[longest].text);
    fclose(pfile);



	return 0;
}

/* other functions */