#include <stdio.h>

int main(){
    int i, matriz[8][8],j;

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(i>=j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j]=0;
            }
        }
    }

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("| %d |", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
