#include <stdio.h>
#include <stdlib.h>

/*
 Nome: Jo�o Vitor Pires de Souza
 RA: 2760482311008

 O programa a seguir calcular� a circunfer�ncia de um determinado planeta, com base na sombra de uma estaca na cidade C1 enquanto o Sol est� em z�nite na cidade C2.
 O �ngulo A � determinado pela rela��o entre a estaca utilizada e a hipotenusa formada pela sombra.

 Input
 Ser� recebido 2 inputs, primeiramente a dist�ncia D entre as cidades C1 e C2, depois o �ngulo A.

 Output
 Ser� mostrado 2 outputs, primeiramente Ce sendo o tamanho da circunfer�ncia do planeta em est�dios, e depois Ckm mostrar� em Km.
 */


int main()
{
    double D, A, r, Ckm, Ce;

    printf("Digite a distancia D entre a localidade C1 e C2: ");
    scanf("%lf", &D);

    printf("Digite o angulo: ");
    scanf("%lf", &A);

    // C�lculo do raio
    r = ((D * 0.1764) * 360) / (2 * 3.14 * A); //Tamanho do Est�dio = 0.1764km

    //Circunfer�ncia do Planeta em Km
    Ckm = 2 * 3.14 * r;

    //Circunfer�ncia do Planeta em Est�dios
    Ce = Ckm / 0.1764;

    printf("\nCe =  %.1f\nCkm = %.1f\n", Ce, Ckm);
    return 0;
}
