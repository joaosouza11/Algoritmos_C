#include <stdio.h>
#include <locale.h>

/*
No brasileirao, 20 times disputam o tıtulo em dois turnos. No
primeiro turno todos os times jogam entre si uma unica vez. Os jogos
do segundo turno ocorrem na mesma ordem que no primeiro, apenas
invertendo-se o mando de campo.

Os times sao classificados por pontos. Caso dois times atinjam o
mesmo numero de pontos, eles sao desempatados aplicando-se os
seguintes criterios nesta ordem:

1) numero de vitorias (maior melhor)
2) saldo de gols (maior melhor)
3) gols marcados (maior melhor)
4) numero de cart˜oes vermelho (menor melhor)
5) numero de cart˜oes amarelos (menor melhor)

Faca um programa que leia as cinco informacoes acima de dois times e
decida qual time vence o desempate.
 */

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vitorias1, saldo1, gols1, c_vermelhos1, c_amarelos1, vitorias2, saldo2, gols2, c_vermelhos2, c_amarelos2;


    //Pegando os dados do time 1
    printf("\nNúmero de vitórias do time 1: ");
    scanf("%d", &vitorias1);
    printf("\nSaldo de gols do time 1: ");
    scanf("%d", &saldo1);
    printf("\nGols marcados do time 1: ");
    scanf("%d", &gols1);
    printf("\nNúmero de cartões vermelho do time 1: ");
    scanf("%d", &c_vermelhos1);
    printf("\nNúmero de cartões amarelo do time 1: ");
    scanf("%d", &c_amarelos1);

    //Pegando os dados do time 2
    printf("\nNúmero de vitórias do time 2: ");
    scanf("%d", &vitorias2);
    printf("\nSaldo de gols do time 2: ");
    scanf("%d", &saldo2);
    printf("\nGols marcados do time 2: ");
    scanf("%d", &gols2);
    printf("\nNúmero de cartões vermelho do time 2: ");
    scanf("%d", &c_vermelhos2);
    printf("\nNúmero de cartões amarelo do time 2: ");
    scanf("%d", &c_amarelos2);


    //Criterios de desempate
    if(vitorias1 > vitorias2) {
        printf("\nO time 1 ganhou o desempate!");
    } else if(vitorias1 < vitorias2) {
        printf("\nO time 2 ganhou o desempate!");
    } else if(saldo1 > saldo2) {
        printf("\nO time 1 ganhou o desempate!");
    } else if(saldo1 < saldo2) {
        printf("\nO time 2 ganhou o desempate!");
    } else if (gols1 > gols2) {
        printf("\nO time 1 ganhou o desempate!");
    } else if (gols1 < gols2) {
        printf("\nO time 2 ganhou o desempate!");
    } else if (c_vermelhos1 < c_vermelhos2) {
        printf("\nO time 1 ganhou o desempate!");
    } else if (c_vermelhos1 > c_vermelhos2) {
        printf("\nO time 2 ganhou o desempate!");
    } else if (c_amarelos1 < c_amarelos2) {
        printf("\nO time 1 ganhou o desempate!");
    } else if (c_amarelos1 > c_amarelos2) {
        printf("\nO time 2 ganhou o desempate!");
    } else {
        printf("\nOs time empataram!");
    }

    return 0;
}
