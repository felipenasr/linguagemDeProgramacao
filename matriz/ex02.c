#include <stdio.h>

int main (){

    int matriz1[3][3];
    int somaDiagonal=0, somaOutros=0;
    int i,j;



    printf("Matriz 1 com valores 0 e 1 \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite 1 ou 0 \n");
            scanf("%d", &matriz1[i][j]);
            while(matriz1[i][j] != 0 && matriz1[i][j]!=1){
                printf("\nO número tem que ser 1 ou 0 \n");
                scanf("%d", &matriz1[i][j]);
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                somaDiagonal = somaDiagonal + matriz1[i][j];
            }else{
                somaOutros = somaOutros + matriz1[i][j];
            }
        }
    }
    if(somaDiagonal == 1 && somaOutros ==0){
        printf("\n\nMatriz 1 e identidade");
    }else{
        printf("\n\nMatriz 1 nao e identidade");
    }

    return 0;
}
