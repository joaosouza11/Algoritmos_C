#include <stdio.h>

// Escreva um programa le tres numeros e os imprime em ordem (ordem crescente).

int main() {
    int n1, n2, n3;

    printf("Numero 01: ");
    scanf("%d", &n1);

    printf("\nNumero 02: ");
    scanf("%d", &n2);

    printf("\nNumero 03: ");
    scanf("%d", &n3);

    //n1 sendo o menor
    if (n1 <= n2 && n1 <= n3) {
        //saber qual o proximo numero na ordem entre os que sobraram
        if (n2 <= n3)
            printf("\n%d, %d, %d", n1, n2, n3);
        else
            printf("\n%d, %d, %d", n1, n3, n2);
    //n2 sendo o menor
    } else if (n2 <= n1 && n2 <= n3) {
        if (n1 <= n3)
            printf("\n%d, %d, %d", n2, n1, n3);
        else
            printf("\n%d, %d, %d", n2, n3, n1);
    //n3 sendo o menor
    } else {
        if (n1 <= n2)
            printf("\n%d, %d, %d", n3, n1, n2);
        else
            printf("\n%d, %d, %d", n3, n2, n1);
    }

    return 0;
}