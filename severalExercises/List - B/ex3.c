/*Fa�a um programa que leia a idade de um eleitor e imprima se ele � eleitor facultativo (entre 16 e 17 anos), 
eleitor obrigat�rio (entre 18 a 69) ou dispensado (acima de 70 ou menor que 16).*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite a idade do eleitor: ");
	scanf("%d", &idade);
	
	if ((idade == 16) || (idade == 17)){
		printf("FACULTATIVO");
	} if ((18 <= idade) && (idade <= 69)){
		printf("OBRIGAT�RIO");
	} if ( (16 > idade) || (idade >= 70) ) {
		printf("DISPENSADO");
	}
}
