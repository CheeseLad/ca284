/* Include standard input and output */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str1[] = "This is the CA284 class";
	char str2[] = "This is the CA284 class";
	char str3[] = "This is the CA284 Aha";
	char str4[] = "This is the CA284 aha!";
	int compare;

	compare = strcmp(str1, str2);
  	printf("strcmp(str1, str2) = %d\n", compare);

  	compare = strcmp(str1, str3);
  	printf("strcmp(str1, str3) = %d\n", compare);

  	compare = strcmp(str1, str4);
  	printf("strcmp(str1, str4) = %d\n", compare);

  	compare = strcmp(str3, str4);
  	printf("strcmp(str3, str4) = %d\n", compare);

    char a1 = 'A';
    char a2 = 'a';

    printf("A: %d\n", a1);
    printf("a: %d\n", a2);

    printf("%d\n", a1 - a2);
	return 0;
}