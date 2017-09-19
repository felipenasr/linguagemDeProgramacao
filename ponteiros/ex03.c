#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

void calcula(float raio, float *perimetro, float *diametro, float *area);
int main(){
	float raio, diameto, perimetro, area;
	printf("\nDigite o raio da circunferencia: \n");
	scanf("%f", &raio);
	calcula(raio, &diameto, &perimetro, &area);
	
	
	
	printf("\nDiametro: %f", diameto);
	printf("\nPerimero: %f", perimetro);
	printf("\nArea: %f", area);

	

}


void calcula(float raio, float *perimetro, float *diametro, float *area){
 	*diametro = 2*raio;
 	*perimetro = 2 * PI * raio;
 	*area = PI * (raio*raio);
}

