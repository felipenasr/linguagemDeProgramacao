#include <stdio.h>

int main (){
    int vetorA[5], vetorB[5],aux,i, j = 4;

    for(i=0;i<5;i++){
        printf("v1 \n");
        scanf("%d", &vetorA[i]);
        printf("v2 \n");
        scanf("%d", &vetorB[i]);
    }
    printf("antes do trem \n");


    printf("Vetor A: \n");
    for(i=0;i<5;i++){
        printf("%d ", vetorA[i]);
    }
    printf("Vetor B: \n");
    for(i=0;i<5;i++){
        printf("%d ", vetorB[i]);
    }

    for(i=0;i<5;i++){
        aux = vetorA[i];
        vetorA[i] = vetorB[j];
        vetorB[j] = aux;
        j--;
    }

    printf("Vetor A: \n");
    for(i=0;i<5;i++){
        printf("%d ", vetorA[i]);
    }
    printf("Vetor B: \n");
    for(i=0;i<5;i++){
        printf("%d ", vetorB[i]);
    }


}
