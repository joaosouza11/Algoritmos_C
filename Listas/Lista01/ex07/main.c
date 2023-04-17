#include <stdio.h>

//Escreva um programa lê três números e os imprime em ordem (ordem crescente).

int main() {
    int n1, n2, n3, maior, menor;

    printf("Numero 1: ");
    scanf("%d", &n1);

    printf("\nNumero 2: ");
    scanf("%d", &n2);

    printf("\nNumero 3: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3) {
        printf("%d\t", n1);
        if (n2 < n3) {
            printf("%d\t", n2);
            printf("%d\t", n3);
        } else {
            printf("%d\t", n3);
            printf("%d\t", n2);
        }
    } else if (n2 < n1 && n2 < n3) {
        printf("%d\t", n2);
        if (n1 < n3) {
            printf("%d\t", n1);
            printf("%d\t", n3);
        } else {
            printf("%d\t", n3);
            printf("%d\t", n1);
        }
    } else {
        printf("%d\t", n3);
        if (n1 < n2) {
            printf("%d\t", n1);
            printf("%d\t", n2);
        } else {
            printf("%d\t", n2);
            printf("%d\t", n1);
        }
    }

    return 0;
}
