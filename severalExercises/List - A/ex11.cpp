/* 
Fa�a um programa que leia o sal�rio fixo de um vendedor e o total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 18% de 
comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float vendas, fixo, salario; 
	
	printf("Digite o valor fixo ganho pelo funcion�rio: ");
	scanf("%f", &fixo);
	printf("Digite o valor que foi vendido pelo funcion�rio: ");
	scanf("%f", &vendas);
	
	salario = fixo + (vendas*0.18);
	
	printf("O sal�rio no final do m�s desse funcion�rio foi: %.2f", salario);
	
	return 1;
}
