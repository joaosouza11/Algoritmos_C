#include <stdio.h>

/*
Faça um programa que lê um caracter ’F’ ou ’C’, que indica se o próximo número a ser
digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
na outra unidade de medida. Obs.: (C = 5/9 · (F 32)).
*/

int main() {

    char tipo;
    float n, vFinal;

    printf("Digite 'F' para Fahrenheit ou 'C' para Celsius: ");
    scanf("%c", &tipo);

    printf("\nValor da temperatura: ");
    scanf("%f", &n);

    if (tipo == 'F') {
        vFinal = (n - 32) * (5.0 / 9);
        printf("\n%.2f", vFinal);
    } else if (tipo == 'C') {
        vFinal = (n * (9.0 / 5) + 32);
        printf("\n%.2f", vFinal);
    }

    return 0;
}
