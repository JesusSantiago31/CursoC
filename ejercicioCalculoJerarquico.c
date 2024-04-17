#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("**** Ejercicio a ****\n");
    //Las divisiones se hacen antes que las sumas 
    double a=1, b=3, c=5, d=30, e=23;

    double res1 = (a/b)+(b/c)+((a/d)/(e/d));

    printf("El resultado es: %f \n", res1);
    printf("El resultado es: %f \n", ((1.0/3.0)+(3.0/5.0)+((1.0/30.0)/(23.0/30.0))));

    puts("**** Ejercicio b ****");
    float f=1, g=2, h=4;
    double x1, x2, x3, res2;

    x1= f/h;
    x2= g-x1;
    x3= g/x2+1;
    res2 = (g/f)/(f/x3)+5;
    printf("El resultado es: %f \n", res2);
            
    return 0;

}
