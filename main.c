#include <stdio.h>

int main() {
    
    // Aqui são criadas variáveis do tipo inteiro.
    int soma, sub, multi, div, A, B;

    printf("\n-= CÁLCULOS BÁSICOS EM C =-\n");

    // Pede ao usuário que informe 2 números para
    // que sejam feitos os cálculos.
    printf("\nInforme um número do tipo inteiro: ");
    scanf("%d", &A);

    printf("Informe outro número do tipo inteiro: ");
    scanf("%d", &B);

    // Aqui são realizados os cálculos e os resultados são
    // armazenados nas respectivas variáveis
    soma = A + B;
    sub = A - B;
    multi = A * B;
    div = A / B;

    // Aqui será impresso no terminal, o resultado de todos
    // os cálculos
    printf("\n\n======= Resultados =======");
    printf("\nsoma: %d + %d = %d", A, B, soma);
    printf("\nsubtração: %d - %d = %d", A, B, sub);
    printf("\nmmultiplicação: %d * %d = %d", A, B, multi);
    printf("\ndivisão: %d / %d = %d", A, B, div);
    printf("\n==========================");

    return 0;

}