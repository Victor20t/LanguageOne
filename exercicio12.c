#include <stdio.h>
#include <stdbool.h>

int main(){
    int numero;
    bool ativo = true;

    while (ativo){
    printf("Entre com um numero interio: ");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("O numero é par: %d\n", numero);
    }else{
        printf("ERRO!!! isto é um numero é um impar!\n");
    }
}
return 0;
}