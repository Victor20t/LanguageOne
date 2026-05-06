#include <stdio.h>

int main(){
    //dado numero real qualquer calcule e escreva a terça parte do numero dado: 
    double numero, terceira_part; 

    printf("Digite um numero real:");
    scanf("%lf", &numero);
    terceira_part = numero / 3 ;
    printf("A terça parte de %lf é %lf", numero, terceira_part);

}