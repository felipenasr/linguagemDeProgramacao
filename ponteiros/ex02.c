#include <stdio.h>
#include <stdlib.h>


void Somas(int N, int *u, int *d, int *c);
int main(){
	int N, u=0, d=0, c=0;
	printf("Digite um numero com 3 digitos\n");
	scanf("%d", &N);
	while(N>1000){
		printf("\nNumero Invalido!\n");
		scanf("%d", &N);	
	}
	Somas(N, &u, &d, &c);
	
	printf("\nUnidade: %d\nDezena: %d\nCentena: %d",c,d,u);
	system("pause>>null");
	return 0;
}

void Somas(int N, int *u, int *d, int *c){
	*c = N/100;
	*d = (N%100)/10;
	*u = (N%100)%10;
}
