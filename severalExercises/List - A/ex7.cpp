/* 
O �ndice de massa corporal (IMC) � uma medida internacional usada para calcular se uma pessoa est� no peso ideal. 
O IMC � determinado pela divis�o da massa do indiv�duo pelo quadrado de sua altura, em que a massa est� em quilogramas 
e a altura em metros, ou seja: IMC = massa/altura^2. Fa�a um programa que leia a massa e altura da pessoa e calcule o IMC dela.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	 
	float height, weight, IMC;
	
	printf("Digite a massa do indiv�duo (em kg): ");
	scanf("%f", &weight);
	printf("Digite a altura do indiv�duo (em m)): ");
	scanf("%f", &height);
	
	IMC = weight / pow(height,2);
	
	printf("O IMC da pessoa �: %.2f", IMC);
	
	return 1; 	
}
