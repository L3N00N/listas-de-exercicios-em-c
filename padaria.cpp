/* 3. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de
broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono
quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar
numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos
para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados. */

#include <stdio.h>

int main(void){
	int pao, broa;
	float pt, bt, total, poupanca;
	printf("digite quantos paes foram vendidos hoje\n");
	scanf("%i",&pao);
	pt= (pao*0.12);
	printf("foram arrecados %.2f R$ em paes hoje\n\n",pt);
	
	printf("digite quantas broas foram vendidos hoje\n");
	scanf("%i",&broa);
	bt= (broa*1.50);
	printf("foram arrecadados %.2f R$ em broas hoje\n\n",bt);
	
	total= (pt+bt);
	printf("sendo arrecadado um total de %.2f R$\n\n",total);
	
	poupanca= ((total*10)/100);
	printf("como solicitado sera deixado na poupanca %.2f R$",poupanca);
	
}
