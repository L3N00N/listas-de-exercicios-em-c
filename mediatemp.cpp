/* 3 � Algoritmo Media Valor
Dado uma s�rie de 05 valores inteiros de temperatura, leia este 5 valores e calcule a m�dia
destes, e em seguida apresente esta m�dia e caso esta seja maior e igual que 30 graus
escreva �temperatura acima da m�dia, calor�, caso esta m�dia seja inferior ou igual a 15 graus
�temperatura a baixo da m�dia, frio � e se esta estiver no intervalo entre estes dois valores,
�temperatura mediana, temperatura agrad�vel� */
#include <stdio.h>
int main(void){
	float temp1, temp2, temp3, temp4, temp5;
	float media;
	
	printf("Digite a 1� temp\n");
	scanf("%f",&temp1);
	printf("a temp1 � de %f\n\n", temp1);
	
	printf("Digite a 2� temp\n");
	scanf("%f",&temp2);
	printf("a temp2 � de %f\n\n", temp2);
	
	printf("Digite a 3� temp\n");
	scanf("%f",&temp3);
	printf("a temp3 � de %f\n\n", temp3);
	
	printf("Digite a 4� temp\n");
	scanf("%f",&temp4);
	printf("a temp4 � de %f\n\n", temp4);
	
	printf("Digite a 5� temp\n");
	scanf("%f",&temp5);
	printf("a temp5 � de %f\n\n", temp5);
	
	media = ((temp1+temp2+temp3+temp4+temp5)/5);
	
	printf("a media das temperaturas � de %f\n\n",media);
	
	if(media>30){
		printf("temperatura acima da m�dia, calor");
	}
	else if(media<15){
		printf("temperatura a baixo da m�dia, frio");
	}
	else{
		printf("temperatura mediana, temperatura agrad�vel");
	}
	
}
