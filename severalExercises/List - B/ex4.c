/*Um motorista de Uber estipula o pre�o de uma determinada viagem dada a quantidade de quil�metros percorrida. Para viagens de at� X km, 
� cobrado um valor R$ V1 por km. Acima de Y km, � cobrado o valor R$ V2. Fa�a um programa que leia X, V1, V2 e a quantidade de quil�metros 
A da viagem e imprima o valor total com duas casas decimais.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, kms;
	float v1, v2;
	
	printf("Digite at� quantos km � cobrado o valor 1: ");
	scanf("%d", &x);
	printf("Digite o valor 1: ");
	scanf("%f", &v1);
	printf("Digite o valor 2: ");
	scanf("%f", &v2);
	printf("Digite o tamanho da viagem (em Km): ");
	scanf("%d", &kms);
	
	if (x >= kms){
		printf("O valor da viagem � igual a: %.2f", kms*v1);
	} else {
		printf("O valor da viagem � igual a: %.2f", kms*v2);
	}
}
