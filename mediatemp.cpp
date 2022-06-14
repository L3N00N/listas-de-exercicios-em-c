/* 3 – Algoritmo Media Valor
Dado uma série de 05 valores inteiros de temperatura, leia este 5 valores e calcule a média
destes, e em seguida apresente esta média e caso esta seja maior e igual que 30 graus
escreva “temperatura acima da média, calor”, caso esta média seja inferior ou igual a 15 graus
“temperatura a baixo da média, frio “ e se esta estiver no intervalo entre estes dois valores,
“temperatura mediana, temperatura agradável” */
#include <stdio.h>
int main(void){
	float temp1, temp2, temp3, temp4, temp5;
	float media;
	
	printf("Digite a 1º temp\n");
	scanf("%f",&temp1);
	printf("a temp1 é de %f\n\n", temp1);
	
	printf("Digite a 2º temp\n");
	scanf("%f",&temp2);
	printf("a temp2 é de %f\n\n", temp2);
	
	printf("Digite a 3º temp\n");
	scanf("%f",&temp3);
	printf("a temp3 é de %f\n\n", temp3);
	
	printf("Digite a 4º temp\n");
	scanf("%f",&temp4);
	printf("a temp4 é de %f\n\n", temp4);
	
	printf("Digite a 5º temp\n");
	scanf("%f",&temp5);
	printf("a temp5 é de %f\n\n", temp5);
	
	media = ((temp1+temp2+temp3+temp4+temp5)/5);
	
	printf("a media das temperaturas é de %f\n\n",media);
	
	if(media>30){
		printf("temperatura acima da média, calor");
	}
	else if(media<15){
		printf("temperatura a baixo da média, frio");
	}
	else{
		printf("temperatura mediana, temperatura agradável");
	}
	
}
