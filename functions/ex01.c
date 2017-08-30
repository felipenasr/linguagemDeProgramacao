#include <stdio.h>
#include <stdlib.h>

void Verifica(int n);

main(){
    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);
    Verifica(numero);


}


void Verifica(int n){
    if(n%2==0){
        printf("\nE par");
    }else{
        printf("\nE impar");
    }
}
