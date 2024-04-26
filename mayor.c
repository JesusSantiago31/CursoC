#include <stdio.h>

int mayor (int nu1, int num2);
int main(){
    int nu1, num2;
    
    printf("Ingresa el valor 1: ");
    scanf("%d", &nu1);
    printf("Ingresa el valor 2: ");
    scanf("%d", &num2);

   printf("El numero mayor es: %d\n", mayor(nu1, num2));

    return 0;
}
int mayor (int nu1, int num2){
    int mayorN;
     mayorN = (nu1>num2) ? nu1 : num2;

    return mayorN;
}