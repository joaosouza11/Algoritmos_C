#include <stdio.h>

/*
 Quando acoes sao vendidas ou compradas por meio de um corretor, a
comissao do corretor e muitas vezes calculada usando uma escala que
depende do valor das acoes negociadas. Escreva um programa que calcule
o valor da comissao a partir do valor da transacao informado pelo usuario,
sabendo-se que o corretor cobra os valores indicados abaixo e que a
comissao mınima e de R$ 39,00:

Ate R$ 2.500,00, comissao de R$30+1,7%
R$2.500,01 ate R$6.250,00, comiss˜ao de R$56 + 0,66%
R$6.250,01 ate R$20.000,00, comiss˜ao de R$76 + 0,34%
R$20.000,01 ate R$50.000,00, comiss˜ao de R$100 + 0,22%
R$50.000,01 ate R$500.000,00, comiss˜ao de R$155 + 0,11%
Mais que R$ 500.000,00, comiss˜ao de R$255 + 0,09%
 */

int main() {
    float transacao, comissao;

    printf("Qual foi o valor da transacao?\nR$ ");
    scanf("%f", &transacao);

    if (transacao > 0 && transacao <= 2500.00) {
        comissao = 30 + (transacao * 0.017);
    } else if (transacao <= 6250.00) {
        comissao = 56 + (transacao * 0.0066);
    } else if (transacao <= 20000.00) {
        comissao = 76 + (transacao * 0.0034);
    } else if (transacao <= 50000.00) {
        comissao = 100 + (transacao * 0.0022);
    } else if (transacao <= 500000.00) {
        comissao = 155 + (transacao * 0.0011);
    } else if (transacao > 500000) {
        comissao = 255 + (transacao * 0.0009);
    }

    if (comissao < 39) {
        comissao = 39;
    }

    printf("\nA comissao foi de R$%.2f", comissao);
    return 0;
}
