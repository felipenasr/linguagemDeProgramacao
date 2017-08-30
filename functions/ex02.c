#include <stdio.h>
#include <stdlib.h>

int Soma(int n, int m);

main(){
    int numero, numero2;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    printf("\nDigite um numero: ");
    scanf("%d", &numero2);
    printf("\nA soma destes numeros e: %d", Soma(numero, numero2));


    return 0;

}

int Soma(n, m){
    return n+m;
}

