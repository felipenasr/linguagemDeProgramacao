#include <stdio.h>

int main (){
    int vetorA[5], vetorB[5],aux,i, j = 4;

    for(i=0;i<5;i++){
        printf("v1 \n");
        scanf("%d", &vetorA[i]);
        printf("v2 \n");
        scanf("%d", &vetorB[i]);
    }

    for(i=0;i<5;i++){
        aux = vetorA[i];
        vetorA[i] = vetorB[j];
        vetorB[j] = aux;
        j--;
    }


}
