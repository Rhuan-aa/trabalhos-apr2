/*
Fa�a um programa que leia um n�mero inteiro (assuma que esse n�mero ter� 4 d�gitos obrigatoriamente) e inverta esse n�mero. 
Por fim escreva o n�mero invertido. O seu programa deve apenas manipular n�meros inteiros. N�o � permitido usar strings, lista, etc.
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, reversenum, milhar, centena, dezena, unidade;
	
	printf("Digite um numero de 4 digitos: ");
	scanf("%d", &num);
	
	if (1000 <= num <= 9999) {
		
		milhar = num / 1000;
		centena = (num / 100) % 10;
		dezena = (num / 10) % 10;
		unidade = num % 10;
		
		reversenum = unidade * 1000 + dezena * 100 + centena * 10 + milhar;
		
		printf("O numero invertido � %d", reversenum);
	} else {
		printf("N�o � um numero de 4 digitos.");
	}
	
	return 1;
}
