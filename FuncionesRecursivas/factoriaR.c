#include <stdio.h>

int factorial(int numero);

int main (){
    int numero, res;

    printf("Dame un numero ");
    scanf("%d", &numero);

    res = factorial(numero);
    printf("El factorial es = %d", res);
}

int factorial(int numero){

    if (numero<1){
        return 1;
    }
    
    
    printf("%d!     | = %d * %d \n", numero, numero, numero-1);

    return numero* factorial(numero-1);
    
}