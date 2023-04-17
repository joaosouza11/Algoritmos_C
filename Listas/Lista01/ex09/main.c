#include <stdio.h>

/*
Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS:
São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos
os anos múltiplos de 4 mas que não são múltiplos de 100.
*/

int main() {
    int ano;

    printf("Ano: ");
    scanf("%d", &ano);

    if(ano % 400 == 0) {
        printf("\nAno bissexto");
    } else if ((ano % 4 == 0) & (ano % 100 != 0)) {
        printf("\nAno bissexto");
    } else {
        printf("\nDeu ruim");
    }

    return 0;
}
