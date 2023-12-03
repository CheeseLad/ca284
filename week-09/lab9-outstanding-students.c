/*
Author: Jake Farrell
Date: 9/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* type definitions*/
typedef struct Student Student; 

/* struct definitons */
struct Student //Structure type definition
{
	//Define struct members
  char name[20];
  char programme[20];
  float grade;
};

/* function prototypes */
int sumCal(int grades[], int length);

/* main function */
int main(int argc, char*argv[])
{
  Student *pStudent;
    int studentAmount = 2;
    pStudent = (Student*)calloc(studentAmount,sizeof(Student));
    if(!pStudent)
    {
        printf("Not enough memory. Exiting...\n");
        free(pStudent);
        pStudent = NULL;
        exit(0);
    }
  int length = argc - 1;
  if ((length / 3) > studentAmount) {
    Student *pTemp;
    studentAmount += length / 3;
            pTemp = (Student*)realloc(pStudent, studentAmount*sizeof(Student));
            if(!pTemp)  /* Check if the re-allocation is successful */
            {
                printf("Unfortunately memory reallocation failed. Exiting...\n");
                free(pStudent);
                pStudent = NULL;
                exit(0);
            }
            pStudent = pTemp;
        }
  int k = 0;
  float average = 0.0;
  for (unsigned int i = 0; i < length; i = i + 3) {
    strcpy(pStudent[k].name, argv[i + 1]);
    strcpy(pStudent[k].programme, argv[i + 2]);
    pStudent[k].grade = atof(argv[i + 3]);
    average = average + atof(argv[i + 3]);
    k++;
  }
  average = average / k;
  for (unsigned int i = 0; i < k; i++) {
    if (!strcmp(pStudent[i].programme, "CSCE") && pStudent[i].grade >= average) {
      printf("%s, %.2f\n", pStudent[i].name, pStudent[i].grade);
    }
  }
  printf("Average grade: %.2f\n", average);
  free(pStudent);
  pStudent = NULL;
	return 0;
}

/* other functions */