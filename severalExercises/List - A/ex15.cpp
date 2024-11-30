/*
Fa�a um programa que leia um n�mero inteiro E de eleitores de um munic�pio, um n�mero inteiro B que representa o n�mero de votos brancos, 
um n�mero N de votos nulos e um n�mero V de votos v�lidos. O programa deve calcular e escrever o percentual que cada um representa em 
rela��o ao total de eleitores, al�m da porcentagem de ausentes. Formate sua sa�da conforme exemplos abaixo.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int E, B, N, V, A;
	
	printf("Digite o n�mero de eleitores de um municipio: ");
	scanf("%d", &E);
	printf("Digite o n�mero de votos em branco: ");
	scanf("%d", &B);
	printf("Digite o n�mero de votos nulos: ");
	scanf("%d", &N);
	printf("Digite o n�mero de votos v�lidos: ");
	scanf("%d", &V);
	
	A = E - (B+N+V);
	
	if (E >= B+N+V){
		printf("\nNulos: %.2f ", (float) ((N * 100) / E) );
		printf("\nEm Branco: %.2f ", (float) ((B * 100) / E) );
		printf("\nV�lidos: %.2f ", (float) ((V* 100) / E) );
		printf("\nAusentes: %.2f ", (float) ((A * 100) / E) );
	}
	
	return 1;
}
