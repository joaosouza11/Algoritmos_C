#include <stdio.h>

/*
Crie um programa que:
  Le um caracter, pula uma linha e imprime o caracter lido.
  Le um inteiro, pula uma linha e imprime o inteiro lido.
  Le um numero ponto flutuante, pula uma linha e imprime o numero
lido.
 */

int main() {

    char c; int i; float f;

    printf("Digite um caracter: ");
    scanf("%c", &c);
    printf("\n%c", c);

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &i);
    printf("\n%d", i);

    printf("\n\nDigite um float: ");
    scanf("%f", &f);
    printf("\n%.2f", f);

    return 0;
}
