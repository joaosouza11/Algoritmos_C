#include <stdio.h>

// Escreva um programa le tres numeros e imprime o maior deles.

int main() {

    int n1, n2, n3;

    printf("Numero 01: ");
    scanf("%d", &n1);

    printf("\nNumero 02: ");
    scanf("%d", &n2);

    printf("\nNumero 03: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3) {
        printf("\nO maior numero e %d", n1);
    } else {
        if (n2 > n3) {
            printf("\nO maior numero e %d", n2);
        } else {
            printf("\nO maior numero e %d", n3);
        }
    }

    return 0;
}
