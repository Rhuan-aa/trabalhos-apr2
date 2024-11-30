/* 
Sabe-se que uma lata de tinta tem um custo C e � capaz de pintar uma �rea de M metros quadrados. Fa�a um programa que leia a largura L, a altura A de uma parede, 
o valor C de uma lata de tinta e o rendimento M desta lata. Ap�s isso, imprima quantas latas de tintas s�o necess�rias e o custo total (com duas casas decimais). 
Assuma que n�o � poss�vel comprar lata de tinta fracionada.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float C, M, L, A, CTotal;
    int quantidade;
    
    printf("Digite a largura da parede a ser pintada (em metros): ");
    scanf("%f", &L);
    printf("Digite a altura da parede a ser pintada (em metros): ");
    scanf("%f", &A);
    printf("Digite o pre�o da lata de tinta (em reais): ");
    scanf("%f", &C);
    printf("Digite o rendimento da lata de tinta (em metros quadrados): ");
    scanf("%f", &M);
    
    quantidade = (int) ceil((L * A) / M);
    
    CTotal = C * quantidade;
    
    printf("O custo total e a quantidade de latas s�o respectivamente: R$ %.2f e %d latas\n", CTotal, quantidade);
    
    return 0;
}
