#include <stdio.h>

int main(){
    int x;
    for(x = 0; x <= 100; x++){
        if (x%2 == 0){
            printf("True\n Este numero é impar: %d ", x);
        }else{
            printf("Falsse\n ESte numero é par: %d ", x);
            
        }
}
}