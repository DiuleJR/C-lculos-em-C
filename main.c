#include <stdio.h>

int main() {
    
    int soma, sub, multi, div, A, B;

    printf("\nInforme um número do tipo inteiro: ");
    scanf("%d", &A);

    printf("Informe outro número do tipo inteiro: ");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    multi = A * B;
    div = A / B;

    printf("\n\n======= Resultados =======");
    printf("\nsoma: %d + %d = %d", A, B, soma);
    printf("\nsubtração: %d - %d = %d", A, B, sub);
    printf("\nmmultiplicação: %d * %d = %d", A, B, multi);
    printf("\ndivisão: %d / %d = %d", A, B, div);
    printf("\n==========================");

    return 0;

}