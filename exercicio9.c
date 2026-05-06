#include <stdio.h>

int main(){
    double a;
    int b;
    char nome[15];
    char profissao[20];

    printf("Digite um numero racional: ");
    scanf("%lf", &a);
    printf("DIgite um numero interio: ");
    scanf("%d", &b);
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua profissão: ");
    scanf("%s", profissao);

    if(a = a + 1 >= b*b){
        printf(" A é maior que B e seu nome é %s sua profissao é %s", a,b,nome,profissao);
    
    }else{
        printf(" A é menor que B e seu nome é %s sua profissao é %s", a,b,nome,profissao);
    }

    return 0;
}