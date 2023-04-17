#include <stdio.h>

/*
Considere o programa para determinar se uma sequência dennúmeros digitados pelo usuário está ordenada ou não. Faça o programa usando uma variável contadora.
*/

int main() {
    int n, atual, ant, ordem, cont=0, i;

    printf("Quantos numeros serao digitados: ");
    scanf("%d", &n);

    //Ordem 0 = Decrescente | 1 = Crescente
    for(i=1; i <= n; i++) {
        printf("\nValor %d: ", i);
        scanf("%d", &atual);

        //Determinado qual a ordem
        if (i==2) {
            if (atual > ant) { //Crescente
                ordem = 1;
            } else if (atual < ant) { //Descrescente
                ordem = 0;
            } else {
                printf("\nPor enquanto nao aceitamos valores iguais");
                break;
            }
        }

        //Verificando se esta na ordem
        if (i > 2) {
            if(ordem) {
                //Caso nao esteja ira parar
                if (atual < ant) {
                    cont = 1;
                    break;
                }
            } else {
                if (atual > ant) {
                    cont = 1;
                    break;
                }
            }
        }

        ant = atual;
    }

    if (cont) {
        printf("\nQuebrou a ordem");
    } else {
        printf("\nEsta ordenado");
    }

    return 0;
}
