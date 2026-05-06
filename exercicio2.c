#include <stdio.h> 

int main(){
    double number1, number2, number3, mediqa; 

    printf("Informe três números reais não negativos:\n");
    printf("Número 1: ");
    scanf("%lf", &number1);
    printf("Número 2: ");
    scanf("%lf", &number2);
    printf("Número 3: ");
    scanf("%lf", &number3);

    mediqa = (number1 + number2 + number3) / 3;

    printf("A média é: %.2f\n", mediqa);
    return 0;
}