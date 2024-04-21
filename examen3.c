#include <stdio.h>

int main(){
    float lado1, lado2, hipotenusa;
    int i = 1;

    printf("Introduce el lado numero 1: \n");
    scanf("%f", &lado1);
    printf("Introduce el lado numero 2: \n");
    scanf("%f", &lado2);
    printf("Introduce la hipotenusa: \n");
    scanf("%f", &hipotenusa);

    if ((hipotenusa*hipotenusa)==((lado1*lado1)+(lado2*lado2)))
        printf("ES UN TRIANGULO RECTANGULO \n");
    else
        printf("NO es un triangulo rectangulo \n");
    
    printf("Fin del programa \n");
    return 0;
}