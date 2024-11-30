/* 
Fa�a um programa que leia o valor dos catetos de um tri�ngulo ret�ngulo e calcule a hipotenusa, de acordo com o Teorema de Pit�goras. 
Pesquise como extrair a raiz quadrada de um n�mero. Exemplos de entrada e sa�da:
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float c1, c2, h;
	
	printf("Digite o valor do primeiro cateto do tri�ngulo ret�ngulo: ");
	scanf("%f", &c1);
	printf("Digite o valor do segundo cateto do tri�ngulo ret�ngulo: ");
	scanf("%f", &c2);
	
	h = sqrt(pow(c1,2) + pow(c2,2));
	
	
	printf("O tamnho da hipotenusa �: %.2f", h);
	
	return 1;
}
