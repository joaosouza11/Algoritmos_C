#include <stdio.h>
/*
 Nome: Joao Vitor Pires de Souza
 RA: 2760482311008

 O programa a seguir ira receber "n" anos e seus respectivos valores do PIB de um determinado pais. Com base nisso ira calcular qual foi o trienio que conteve o maior crescimento medio percentual do PIB e mostrar o seu valor.

 Entrada:
    n_anos -> Numero de anos considerado
    ano(0-3) -> PIB de cada ano

 Saida:
    trienio -> Primeiro e ultimo ano de um periodo de 3 anos no qual teve maior aumento percentual do PIB
    med_max -> Crescimento medio percentual do Trienio
 */

int main() {

    int n_anos=0, trienio=2, i=0;
    float med_tri=0, med_max=0, ano0=0, ano1=0, ano2=0, ano3=0;

    //Coletando os Dados
    printf("Numero de anos: " );
    scanf("%d", &n_anos);

    printf("\nInsira o PIB do ano 0: ");
    scanf("%f", &ano0);

    printf("\nInsira o PIB do ano 1: ");
    scanf("%f", &ano1);

    printf("\nInsira o PIB do ano 2: ");
    scanf("%f", &ano2);


    //Calculando media primeiro trienio; Considerando o aumento do ano0 como 0
    med_tri = (((ano1 - ano0) / (ano0/100)) + ((ano2 - ano1) / (ano1/100))) / 3;
    med_max = med_tri;

    //Loop repitira ate chegar na quantidade de anos pedidos (n_anos)
    for(i=3; i < n_anos; i++) {
        printf("\nInsira o PIB do ano %d: ", i);
        scanf("%f", &ano3);

        //Media do Trienio de acordo com o novo ano informado
        med_tri = (((ano1 - ano0) / (ano0/100)) + ((ano2 - ano1) / (ano1/100)) + ((ano3 - ano2) / (ano2/100))) / 3;

        //Se a nova Media do Trienio calculada for a maior que a Media do Trienio anterior (med_max), seu valor passa a ser o Maior Trienio
        if (med_tri > med_max) {
            med_max = med_tri;
            trienio = i;
        }

        //Passando os valores para variavel anterior, para conseguir atribuir um proximo valor ao ano3 se necessario
        ano0 = ano1;
        ano1 = ano2;
        ano2 = ano3;
    }
    printf("\nA maior media de crescimento foi entre os anos %d e %d: %.1f%%", trienio-2, trienio, med_max);

    return 0;
}
