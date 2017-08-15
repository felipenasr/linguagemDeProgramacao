#include <stdio.h>

int main (){
    int i;
    int vetor [20];

    for(i = 0; i< 20; i++){
        scanf("%d", &vetor[i]);
    }
    for(i=19;i>=0;i--){
        printf("%d", vetor[i]);
    }



    return 0;
}
