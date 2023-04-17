#include <stdio.h>
/*
Faça um programa que imprima um menu de 4 pratos na tela e uma quinta opção para sair do programa. O programa deve imprimir o prato solicitado. O programa deve terminar quando for escolhido a quinta opção.
*/

int main() {
    int controle = 1, pedido;

    while (controle != 0) {
        printf("\n\n-=-=-=-=-=-=-=-=--=-=-=-=");
        printf("\nBom dia, hoje temos em nosso cardapio os seguintes pratos");
        printf("\nTorrada com guacamole");
        printf("\nBanana com aveia");
        printf("\nIogurte com fruta");
        printf("\nTofu mexido");
        printf("\n\nEscolha o pedido (digite 5 para cancelar): ");
        scanf("%d", &pedido);

        switch (pedido){
            case 1:
                printf("\nTorrada com guacamole");
                break;
            case 2:
                printf("\nBanana com aveia");
                break;
            case 3:
                printf("\nIogurte com fruta");
                break;
            case 4:
                printf("\nTofu mexido");
                break;
            case 5:
                controle = 0;
                break;
            default:
                printf("\nOpcao invalida.");
                break;
        }
    }

    return 0;
}
