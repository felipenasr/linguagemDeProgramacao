#include <stdio.h>

int main(){
    int i, vetor[10];
    int soma = 0;

    for(i=0;i<10;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<10;i++){
        if(vetor[i] < 0){
            printf("%d \n", vetor[i]);
        }
    }
    return 0;
}

