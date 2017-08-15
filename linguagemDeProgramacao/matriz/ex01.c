#include <stdio.h>

int main (){

    int matriz[4][4];
    int i,j;
    int soma = 0;


    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }


    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("| %d |", matriz[i][j]);
            soma = soma + matriz[i][j];
        }
        printf("\n");
    }

    printf("%d", soma);


    return 0;
}
