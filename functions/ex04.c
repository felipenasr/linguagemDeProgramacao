#include <stdio.h>
#include <stdlib.h>

int Tempo(int tempo);

main(){
    int numero;

    printf("\nDigite o numero de segundos: ");
    scanf("%d", &numero);
    printf("%d", Tempo(numero));

}


int Tempo(int tempo){
    return tempo/60;
}

