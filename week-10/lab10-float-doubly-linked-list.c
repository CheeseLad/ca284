/*
Author: Jake Farrell
Date: 16/11/2023
Description:
*/

/* includes */
#include <stdio.h>
#include <stdlib.h>

/* type definitions*/
typedef struct Node Node; 

/* struct definitons */
struct Node //Structure type definition
{
	//Define struct members
	float value;
	Node *next;
	Node *prev;
};

/* function prototypes */
void printReverse(Node *last);

/* main function */
int main(int argc, char*argv[])
{
  Node *start = NULL;
  int length = atoi(argv[1]);
  Node *current, *first, *prev;
	first = (Node*)calloc(1,sizeof(Node));
	current = first;
  current->value = atof(argv[2]);
  current->prev = NULL;
  for (int i = 1; i < length; i++) {
    current->next = (Node*)calloc(1, sizeof(Node));
    prev = current;
    current = current->next;
    current->value = atof(argv[i + 2]);
    current->prev = prev;
  }
  current->next = NULL;
  start = current;
  printReverse(start);
	return 0;
}

/* other functions */
void printReverse(Node *last)
{
	Node* p = NULL;
	for(p = last; p != NULL; p = p->prev)
	{
		printf("%.2f\n", p->value);
	}
}