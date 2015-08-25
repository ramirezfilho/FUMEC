
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 100;

	int contaAteUm(int n){
		printf("\n%d",n);
			if(n == 1){
				return 0;
			}
		n-=1;
		contaAteUm(n);
		return 0;
	}

	contaAteUm(n);

	return 0;
}
