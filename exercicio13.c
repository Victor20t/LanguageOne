#include <stdio.h>

int main(){
    int numero, save, i = 0;

    printf("Entre com um numero entre 0 e 9999: ");
    scanf("%d", &numero);

    save = numero;

    int digitos[20];

    while(save > 0){
        digitos[i] = save % 10;
        save = save / 10;
        i++;
    }

    printf("Digitos: ");
    for (int j = i - 1; j >= j--) {
        printf("%d", digitos[j]);
    }

    return 0;
    
}