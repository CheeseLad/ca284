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
  int numbers[] = {8, 7, 3, 4, 5, 6, 9, 2, 14, 12};
  int search = atoi(argv[1]);
  int num_to_add = atoi(argv[2]);
  Node *current, *first;
  first = (Node*)calloc(1,sizeof(Node)); /*create the first node */
	current = first;
  for (unsigned int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
    current->value = numbers[i];
    current->next = (Node*)calloc(1, sizeof(Node));
		current = current->next;
    if (numbers[i] == search) {
        current->value = num_to_add;
        current->next = (Node*)calloc(1, sizeof(Node));
		    current = current->next;
    }
  }
  current->next = NULL;
  printNodeList(first);
	return 0;
}

/* other functions */

void printNodeList(Node *start)
{
	Node* p = NULL;
	for(p = start; p != NULL; p = p->next)
	{
    if (p->next != NULL) {
      printf("%d\n", p->value);
    }
	}
}