/*
 ============================================================================
 Name        : conferePalavra.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Palíndromo
int verifica( char str[], int len){
	if (len <= 1 ) return 1;
	else {
		if (str[0] != str[len-1] )return 0;
		return verifica(str + 1, len - 2 );
	}
}

int main(void) {

	char pal[100];
	gets(pal);
	int tam = strlen(pal);

	printf("%d", verifica(pal, tam));



		return EXIT_SUCCESS;
}
