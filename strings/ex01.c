#include <stdio.h>

int main () {



    char conteudo[100];
    int i = 0;
    int quantidade;

    printf("Entre com o conteudo \n");

    gets(conteudo);


    while(conteudo[i]!='\0'){
        i++;
    }

    printf("\n%d", i);
    getch();


    return 0;


}
