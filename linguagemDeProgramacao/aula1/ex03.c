#include <stdio.h>

int main(){
    int i,maior, vetor[3];

    for(i=0;i<3;i++){
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for(i=0; i<3;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }
    printf("%d", maior);

    return 0;
}
