#include <stdio.h>
#include <stdbool.h>

/*
Escreva um programa que determina a data cronologicamente maior de duas datas fornecidas pelo usuário. Cada data deve ser fornecida por três valores inteiros onde o primeiro
representa um dia, o segundo um mês e o terceiro um ano.
*/

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    //Coletando Dados
    printf("Data 1");
    printf("\nInsira o dia: ");
    scanf("%d", &dia1);

    printf("\nInsira o mes: ");
    scanf("%d", &mes1);

    printf("\nInsira o ano: ");
    scanf("%d", &ano1);

    printf("\nData 2");
    printf("\nInsira o dia: ");
    scanf("%d", &dia2);

    printf("\nInsira o mes: ");
    scanf("%d", &mes2);

    printf("\nInsira o ano: ");
    scanf("%d", &ano2);

    //Lógica
    bool data1Maior = ((ano1 > ano2) || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2));
    bool datasIguais = (ano1 == ano2 && mes1 == mes2 && dia1 == dia2);

    if (data1Maior) {
        printf("\nA maior data e %d/%d/%d", dia1, mes1, ano1);
    } else if (datasIguais) {
        printf("\nAs datas sao iguais!");
    } else {
        printf("\nA maior data e %d/%d/%d", dia2, mes2, ano2);
    }
    return 0;
}
