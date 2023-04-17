#include <stdio.h>

/*
Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo
das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.
 */

int main() {
    int x, y;

    printf("Valor de x: ");
    scanf("%d", &x);

    printf("\nValor de y: ");
    scanf("%d", &y);

    printf("\nx = %d; y = %d\n", x, y);
    printf("Trocando o conteudo...");

    x = 10, y = 20;
    printf("\nx = %d, y = %d\n", x, y);

    return 0;
}
