#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia os valores correspondentes aos três lados a, b e c de um
triângulo. O programa então determina se o triângulo é isósceles, escaleno ou equilátero,
informando isto para o usuário, e em seguida imprime a área A do triângulo utilizando a
fórmula de Heron.
 */

int main() {
    float a, b, c, s, A;

    printf("Lado a: ");
    scanf("%f", &a);

    printf("\nLado b: ");
    scanf("%f", &b);

    printf("\nLado c: ");
    scanf("%f", &c);

    //Determinando tipo do Triangulo
    if (a == b && b == c && c == a) {
        printf("\nTriangulo Equilatero");
    } else if ((a == b && a != c && b != c) || (a != b && a == c && b != c ) || (a != b && a != c && b == c)){
        printf("\nTriangulo Isosceles");
    } else {
        printf("\nTriangulo Escaleno");
    }

    //Formula de Heron
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));

    //Mostrando
    printf("\nA area do triangulo e igual a %.2f", A);

    return 0;
}
