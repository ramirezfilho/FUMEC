/*
 ============================================================================
 Name        : fatorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fat (int n ){

	if (n == 0) // posso colocar um ou
		return 1;
	else if (n == 1)
		return 1;
	else
		return n*fat(n-1);
}

int main(void) {
	setbuf (stdout, NULL);

	printf("fat --> %d\n", fat(10));

	return EXIT_SUCCESS;
}
