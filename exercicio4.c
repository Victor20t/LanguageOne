#include <stdio.h>

int main(){
    //escreva um algortimo para ler o valor de uma temperatur aem graus celsisu e escrever a mesma temperatura em graus f se c 
    // o vlaor da temperatura em graus celsius então temperatura f  em f é dada por  f = ( 9 *c + 160) / 5 

    float temperatura, convercao;

    printf("--conversor de temperatura-- \n");
    printf("Digite uma temperatura em ºC: ");
    scanf("%f", &temperatura); 

    convercao = (9 * temperatura + 160) /5;

    printf("A temperatura em %f é %f em ºF", temperatura, convercao);

}