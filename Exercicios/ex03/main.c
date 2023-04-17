#include <stdio.h>

/*
Escreva um programa que le um numero inteiro do teclado e imprime
”SIM”se o numero for par e maior do que 10, ou for ımpar e menor
do que 50. Caso contrario o programa deve imprimir "NAO”.
 */

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if ((num % 2 == 0 && num > 10) || (num % 2 == 1 && num < 50)) {
        printf("\nSIM");
    } else {
        printf("\nNAO");
    }

    return 0;
}
