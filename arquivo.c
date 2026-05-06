#include <stdio.h>

int main() {

    int numero, suce, ante;

    printf("Informe um numero intiero: ");
    scanf("%d", &numero);
    suce = numero + 1;
    ante = numero -1 ;

    printf("O sucessor de %d é %d. \n", numero, suce);
    printf("O antecessor de %d é %d \n", numero, ante);
    return 0;
}