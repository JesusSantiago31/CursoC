#include <stdio.h>

int main(){
    int vector[20];
    int i = 0;
     double prom = 0;
    long int multi = 1;
    
    while(i<20){
        printf("Introduce el valor de vector[%d]: \n",i);
        scanf("%d", &vector[i]);
        printf("vector [%d] = %d \n", i, vector[i]);
        prom =+ vector[i];
        multi = multi * vector[i];
        i++;
    }
    long double res = prom/20;
    printf("El promedio es = %Lf", (res));
    printf("\n La multiplicacion es de = %ld \n", multi);
    return 0;
}