#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia um número real x e calcule o valor de f(x) = px+ (x/2) +xx.
(pesquise sobre as funções sqrt e pow).
*/

int main() {
    float x, f;

    printf("Digite um numero real x: ");
    scanf("%f", &x);

    f = sqrt(x) + (x/2) + pow(x, x);

    printf("\n%.2f", f);
    return 0;
}
