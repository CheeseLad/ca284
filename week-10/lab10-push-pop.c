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
  int value;
  Node *next;
};

/* function prototypes */
void printNodeList(Node *start);

/* main function */
int main(int argc, char*argv[])
{
  int length = atoi(argv[1]);
  Node *current, *first;
  first = (Node*)calloc(1,sizeof(Node *)); /*create the first node */
	current = first;
  for (unsigned int i = 0; i < length - 2; i++) {
    current->value = atoi(argv[i + 2]);
    current->next = (Node*)calloc(1, sizeof(Node *));
    if (!current->next)
    {
        printf("Error allocating memory!\n");
        exit(0);
    }
		current = current->next;
  }
  for (unsigned int i = length; i < length + 2; i++) {
    current->value = atoi(argv[i + 2]);
    current->next = (Node*)calloc(1, sizeof(Node *));
		current = current->next;
  }
  current->next = NULL;
  printNodeList(first);
	return 0;
}

/* other functions */

void printNodeList(Node *start)
{
	Node *current;
  current = start;
	while (current->next)
    {
      printf("%d\n", current->value);
      current = current->next;
    }
}
