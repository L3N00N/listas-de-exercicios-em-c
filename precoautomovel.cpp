/*2 � Algoritmo Pre�o de Autom�vel
O pre�o de um autom�vel � calculado pela soma do pre�o de f�brica com o pre�o dos
impostos (45% do pre�o de f�brica) e a percentagem do revendedor (28% do pre�o de f�brica).
Fa�a um algoritmo que leia o nome do autom�vel e o pre�o de f�brica e imprima o nome do
autom�vel e o pre�o final.*/

#include <stdio.h>

int main (void){
	char nome;
	float preco;
	float porc1, porc2;
	
	printf("digite a marca do carro\n");
	scanf("%c",&nome);
	printf("a marca do carro � %c\n\n",nome);
	
	printf("Digite o preco do carro\n");
	scanf("%f",&preco);
	printf("o preco do carro � %f\n\n",preco);
	
	porc1= ((preco*45)/100);
	porc2= ((preco*28)/100);
	
	printf("O carro da marca %c tem seu preco de fabrica de %f\n",nome, porc1);
	printf("o carro da marca %c tem a taxa do revendedor de %f\n\n",nome, porc2);
	
	printf("O carro da marca %c tem seu preco final de %f",nome, (preco+porc1+porc2));
	
}
