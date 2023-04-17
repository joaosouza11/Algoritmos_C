#include <stdio.h>

/*
Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu programa deve calcular e imprimir o valor a^b.
*/

int main() {
    int a, b, res=1, i;

    //Pegando os valores
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("\nDigite o valor de b: ");
    scanf("%d", &b);

    //Logica
    for(i=1; i<=b; i++) {
        res *= a;
    }
    //Mostrando na tela
    printf("\nResultado\n%d^%d e igual a %d", a, b, res);

    return 0;
}
