#include <stdio.h>
/*
Uma pessoa pode se aposentar pelo INSS caso esteja em alguma das situações abaixo:
• É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
• É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
• É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
• É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.
Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável” caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o
programa deverá imprimir “Não Aposentável”.
*/

int main() {
    int idade, contri, ind=0;
    char sexo;

    //Pegando Dados
    printf("Sexo [M/F]: ");
    scanf("%c", &sexo);

    printf("\nIdade: ");
    scanf("%d", &idade);

    printf("\nAnos de contribuicao: ");
    scanf("%d", &contri);

    //Logica
    if(sexo == 'M') {
        if ((idade >= 65 && contri >= 10) || (idade >= 63 && contri >= 15)) {
            ind = 1;
        } else {
            ind = 0;
        }
    } else if (sexo == 'F') {
        if ((idade >= 63 && contri >= 10) || (idade >= 61 && contri >= 15)) {
            ind = 1;
        } else {
            ind = 0;
        }
    } else {
        printf("\nTente Novamente");
    }

    if (ind) {
        printf("\nAposentavel");
    } else {
        printf("\nNao Aposentavel");
    }

    return 0;
}
