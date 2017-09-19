#include <stdio.h>
#include <stdlib.h>

int retornaIntervalo(int n, int *d, int *u, int *b);

int main(){
	int n, d, u, b;
	printf("Digite um numero com intervalo entre 0 e 99\n");
	scanf("%d", &n);
	while (n < 0 || n > 99){
		printf("Numero fora do intervalo!\n");
		scanf("%d", &n);
	}
	retornaIntervalo(n, &d, &u, &b);
	printf("%d%d%d", d,b,u);
	
}

int retornaIntervalo(int n, int *d, int *u, int *b){
	int dezena, unidade;
	*u = n%10;
	*d = n/10;
	
	if (n < 31){
		*b = 0;
	}
	else if (n < 61){
		*b = 1;
	}
	else{
		*b = 2;
	}
	return 0;
}
