#include <stdio.h> 

int main(){
    float saldo, saldoatual; 

    printf("digite seu salario anterior ao reajuste: ");
    scanf("%f", &saldo);

    saldoatual = saldo * 1.01;
    
    printf("seu salario atual é: R$ %.2f\n", saldoatual);
    
    return 0;
}