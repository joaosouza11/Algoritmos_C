#include <stdio.h>
#include <stdlib.h>

/*
 Nome: João Vitor Pires de Souza
 RA: 2760482311008

 O programa a seguir calculará a circunferência de um determinado planeta, com base na sombra de uma estaca na cidade C1 enquanto o Sol está em zênite na cidade C2.
 O ângulo A é determinado pela relação entre a estaca utilizada e a hipotenusa formada pela sombra.

 Input
 Será recebido 2 inputs, primeiramente a distância D entre as cidades C1 e C2, depois o ângulo A.

 Output
 Será mostrado 2 outputs, primeiramente Ce sendo o tamanho da circunferência do planeta em estádios, e depois Ckm mostrará em Km.
 */


int main()
{
    double D, A, r, Ckm, Ce;

    printf("Digite a distancia D entre a localidade C1 e C2: ");
    scanf("%lf", &D);

    printf("Digite o angulo: ");
    scanf("%lf", &A);

    // Cálculo do raio
    r = ((D * 0.1764) * 360) / (2 * 3.14 * A); //Tamanho do Estádio = 0.1764km

    //Circunferência do Planeta em Km
    Ckm = 2 * 3.14 * r;

    //Circunferência do Planeta em Estádios
    Ce = Ckm / 0.1764;

    printf("\nCe =  %.1f\nCkm = %.1f\n", Ce, Ckm);
    return 0;
}
