/*
 ============================================================================
 Name        : fibonacci.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 int fibonacci(int n){
	 if(n == 0 || n == 1){
		 return n;
	 } else {
		 return fibonacci(n-1) + fibonacci(n-2);
	 }
 }


int main(void) {
	setbuf(stdout, NULL);

	printf("%d", fibonacci(45));



	return EXIT_SUCCESS;
}
