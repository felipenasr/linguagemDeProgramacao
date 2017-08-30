#include <stdio.h>
#include <stdlib.h>

float Media(float n, float m, char media);

main(){
    float numero, numero2;
    char c;

    printf("\nDigite um numero: ");
    scanf("%f", &numero);

    printf("\nDigite um numero: ");
    scanf("%f", &numero2);
    printf("\n|A| para aritimetica, |P| para ponderada: ");
    fflush(stdin);
    scanf("%c", &c);

    while(c!='A'&& c!='a' && c!='P'&&c!='p'){
        printf("\nChar invalido! \n");
        printf("\n|A| para aritimetica, |P| para ponderada: ");
        fflush(stdin);
        scanf("%c", &c);
    }

    printf("\nA media e %f", Media(numero, numero2, c));
    return 0;

}

float Media(float n, float m, char media){
    float mediatotal;
    if(media=='a' || media=='A'){
        mediatotal = (n+m)/2;
    }else{
        mediatotal = ((n * 0.3)+(m * 0.7));
    }
    return mediatotal;
}
