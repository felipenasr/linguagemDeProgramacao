#include <stdio.h>
#include <stdlib.h>


void Somas(int N, int *N10, int *N20, int *N30 );
int main(){
	int N, N10, N20, N30;
	printf("Digite um numero\n");
	scanf("%d", &N);
	
	Somas(N, &N10, &N20, &N30);
	printf("%d", N10);
	system("pause>>null");
	return 0;
}

void Somas(int N, int *N10, int *N20, int *N30 ){
	*N10 = N+10;
	*N20 = N+20;
	*N30 = N+30;
}
