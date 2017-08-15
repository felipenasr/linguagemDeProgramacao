#include <stdio.h>

int main(){
    int i, vetor[15],multiplicado[15];

    for(i=0;i<15;i++){
        scanf("%d", &vetor[i]);
    }

    for(i=0;i<15;i++){
        multiplicado[i] = vetor[i]*3;
    }

    for(i=0;i<15;i++){
        printf("\nMultiplicado por 3: \n");
        printf("%d", multiplicado[i]);
        printf("\n");
    }
}
