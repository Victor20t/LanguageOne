#include <stdio.h>

int main(){
    double x;
    double ex;

   // printf("digite o valor de X: ");
   // scanf("%lf", &x);

    for(x = 1 ; x <= 1000;x++){
        ex = (x * x) - 4;

        if(ex > 5){
        printf("O resultado %.2lf e maior que 5\n", ex);
        printf("true\n");
        }else{
        printf("O resultado %.2lf e menor ou igual a 5\n", ex);
        printf("false\n");
    }
 };

}