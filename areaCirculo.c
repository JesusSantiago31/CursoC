#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float pi = 3.1416;
    float radio = 10;
    double area = (pi)*(radio*radio);

    printf("El area del circulo de %f m de diametro es: %f",radio, area);

    printf("\n");
    
    return 0;

}