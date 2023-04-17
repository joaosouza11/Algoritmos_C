#include <stdio.h>

/*
 Crie um programa que le dois numeros double e que computa e
imprime a soma, a diferenca, a multiplicacao e divisao dos dois
numeros.
 */

int main() {

    double n1, n2;

    printf("Primeiro double: \n");
    scanf("%lf", &n1);

    printf("\nSegundo double: \n");
    scanf("%lf", &n2);

    printf("\nA soma entre %.2lf e %.2lf e igual a %.2lf", n1, n2, n1 + n2);
    printf("\nA diferenca e igual a %.2f", n1 - n2);
    printf("\nA multiplicacao e igual a %.2f", n1 * n2);
    printf("\nA divisao e igual a %.2f", n1 / n2);

    return 0;
}