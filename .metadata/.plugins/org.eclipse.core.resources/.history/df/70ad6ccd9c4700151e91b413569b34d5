/*
 ============================================================================
 Name        : mdc_euclides.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mdcEuclides(int x, int y){
	if(x % y == 0){
		return y;
	}
	else {
		return mdcEuclides(y , x % y);
	}
}

int main(void) {
	setbuf(stdout, NULL);
	printf("%d", mdcEuclides(48,30));

	return EXIT_SUCCESS;
}
