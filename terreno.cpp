/*1. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as
dimens�es de um terreno e depois exibir a �rea do terreno.*/

#include <stdio.h>

int main(void){
	float larg, compr, area;
	
	printf("Digite a largura do terreno");
	scanf("%f.1",&larg);
	
	printf("Digite o comprimento do terreno");
	scanf("%f.1",&compr);
	
	area = (larg*compr);
	
	printf("a area do terreno � de %.1f",area);
}
