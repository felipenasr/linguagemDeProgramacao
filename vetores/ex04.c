#include <stdio.h>

int main(){
    int i, vetor[10];
    int soma = 0;

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
        if(i%2 !=0){
            soma = soma + vetor[i];
        }
    }
    printf("%d", soma);
    return 0;
}

