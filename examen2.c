#include <stdio.h>

int main(){
    float radio;
    int i = 1;
    float PI = 3.1416;
    
    while (i<=3)
    {
        printf("Introduce el diametro del circulo %d:\n", i);
        scanf("%f", &radio);
        printf("Curculo %d = %f \n", i, ((PI)*(radio*radio)));
        i++;
    }
    printf("Fin del programa");
    return 0;    
}