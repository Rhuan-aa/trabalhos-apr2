//Fa�a um programa que leia dois n�meros inteiros e imprima o maior deles.

#include <stdio.h>

int main(){
	int A, B;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &A);
	printf("Digite o segundo numero: ");
	scanf("%d", &B);
	
	if (A > B){
		printf("%d", A);
	} else if (B > A) {
		printf("%d", B);
	} else {
		printf("Os numeros s�o iguais.");
	}
}
