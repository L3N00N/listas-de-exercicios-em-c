/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.*/

#include <stdio.h>

int main(void){
	float larg, compr, area;
	
	printf("Digite a largura do terreno");
	scanf("%f.1",&larg);
	
	printf("Digite o comprimento do terreno");
	scanf("%f.1",&compr);
	
	area = (larg*compr);
	
	printf("a area do terreno é de %.1f",area);
}
