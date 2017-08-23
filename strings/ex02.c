#include <stdio.h>

int main () {



    char frasenormal[11];
    char fraseInvertida[11];
    int i = 0;
    int limite,j;

    printf("Entre com o texto\n");

    gets(frasenormal);

    printf("\n%s\n\n", frasenormal);


    while(frasenormal[i]!='\0'){
        i++;
    }

    limite = i-1;
    j = limite;


    for(i=0;i<=j;i++){
        fraseInvertida[limite] = frasenormal[i];
        printf("%d", limite);
        limite--;
    }
    fraseInvertida[i]= '\0';

    printf("\n%s\n\n", fraseInvertida);



    return 0;


}

