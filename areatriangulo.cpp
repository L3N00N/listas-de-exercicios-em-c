#include <stdio.h>
#include <stdlib.h>

int main(void){
	int h, l, x;
	printf("Digite a altura do triangulo");
	scanf("%i",&h);
	printf("Digite o lado do trinagulo");
	scanf("%i",&l);
	x = (h*l);
	printf("A area do triangulo é %i",x/2);
}
