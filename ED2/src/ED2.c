/*
 ============================================================================
 Name        : ED2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//* acessa o conteúdo do endereço


int somaDez(int *xuxu){
	return *xuxu +10;
}
int main(void) {


		int x;
		int *ptr;

		x = 10;
		ptr = &x;

		//Endereços das variaveis em memoria
		printf("end x --> %p\n", &x);
		printf("end prt -->%p\n", &ptr);

		x = somaDez(&x);

		//Endereços das variaveis em memoria
		printf("end x --> %d\n", x);
		printf("end prt -->%p\n", ptr);


	return 0;
}
