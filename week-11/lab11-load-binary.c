/*
Author: Jake Farrell
Date: 30/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <string.h>

/* type definitions*/
typedef struct Student Student;

/* struct definitons */
struct Student{

    //Define struct members
    int name_length;
    int college_length;
    char name[50];
    char college[40];
    int age;
    float grade;
};

int main()
{
    FILE *pfile = NULL;
    char *filename = "studentBinary.bin";

    pfile = fopen(filename, "rb");
    if(!pfile)
        printf("Failed to open %s.\n", filename);


    Student s;

    int rcount1 = fread(&s.name_length, sizeof(int), 1, pfile);
    int rcount2 = fread(s.name, sizeof(char), s.name_length, pfile);
    int rcount3 = fread(&s.college_length, sizeof(int), 1, pfile);
    int rcount4 = fread(s.college, sizeof(char), s.college_length, pfile); 
    int rcount5 = fread(&s.age, sizeof(int), 1, pfile);
    int rcount6 = fread(&s.grade, sizeof(float), 1, pfile);

    fclose(pfile);

    printf("Name: %s\n", s.name);
    printf("College: %s\n", s.college);
    printf("Age: %d\n", s.age);
    printf("Grade: %.2f\n", s.grade);

    return 0;
}
/* other functions */