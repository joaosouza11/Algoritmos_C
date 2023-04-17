#include <stdio.h>

/*
Faça um programa que lê um número n e que compute e imprima o valor de sigma de i=1.
*/

int main() {
    int n, i, res=0;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("\nSomando os valores: ");

    for (i=1; i<=n; i++) {
        res += i;
        printf("%d | ", i);
    }

    printf("\nResultado: %d", res);

    return 0;
}
