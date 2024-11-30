/* 
Fa�a um programa que leia tr�s n�meros reais A, B e C de uma equa��o do segundo grau, considerando: Ax^2 + Bx + C. 
Seu programa deve calcular e imprimir as as ra�zes da equa��o. Assuma que delta sempre ser� positivo.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float x1, x2, A, B, C, delta;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	printf("Digite o valor de C: ");
	scanf("%f", &C);
	
	delta = pow(B,2) - (4*A*C);
	
	if (delta > 0){
		x1 = (-B + sqrt(delta)) / (2*A);
		x2 = (-B - sqrt(delta)) / (2*A);
		printf("As ra�zes s�o respectivamente: %.2f e %.2f", x1, x2);
	} else {
		printf("O delta n�o � positivo");
	}
}
