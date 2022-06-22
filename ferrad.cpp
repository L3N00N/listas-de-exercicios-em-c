/* Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras. */

#include <stdio.h>

int main(void){
	int  cavalos, ferrad;
	
	printf("Digite quantos cavalos precisam de novas ferraduras");
	scanf("%i", &cavalos);
	
	ferrad= (cavalos*4);
	
	printf("Serao necessarios %i no total", ferrad);
}
