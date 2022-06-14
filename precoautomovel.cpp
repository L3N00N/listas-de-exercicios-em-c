/*2 – Algoritmo Preço de Automóvel
O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos
impostos (45% do preço de fábrica) e a percentagem do revendedor (28% do preço de fábrica).
Faça um algoritmo que leia o nome do automóvel e o preço de fábrica e imprima o nome do
automóvel e o preço final.*/

#include <stdio.h>

int main (void){
	char nome;
	float preco;
	float porc1, porc2;
	
	printf("digite a marca do carro\n");
	scanf("%c",&nome);
	printf("a marca do carro é %c\n\n",nome);
	
	printf("Digite o preco do carro\n");
	scanf("%f",&preco);
	printf("o preco do carro é %f\n\n",preco);
	
	porc1= ((preco*45)/100);
	porc2= ((preco*28)/100);
	
	printf("O carro da marca %c tem seu preco de fabrica de %f\n",nome, porc1);
	printf("o carro da marca %c tem a taxa do revendedor de %f\n\n",nome, porc2);
	
	printf("O carro da marca %c tem seu preco final de %f",nome, (preco+porc1+porc2));
	
}
