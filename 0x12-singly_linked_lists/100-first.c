#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the main function is executed.
 */
void hare(void)
{
	printf("you are the best ");
	printf("\n and thats the fact... keep it to me up \n");
}
