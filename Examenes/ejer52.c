#include <stdio.h>
#include <time.h>
int main (){
    int au,fa,fm,fd;
    printf("En que año naciste");
    scanf("%d", &au);
    clock_t inicio = clock();
    fa=2024-au;
    printf("tienes %d años de edad\n", fa);
    fm=fa*12;
    printf("tienes %d meses de edad\n", fm);
    fd=fa*365;
    printf("tienes %d dias de edad\n", fd); 
    clock_t fin = clock();
    double tiempototal= (double)(fin - inicio) /CLOCKS_PER_SEC;

    printf("Segundos que tardo en ejecutarse: %f \n", tiempototal);
    printf("Ciclos de reloj que tardo en ejecutarse: %f\n", (double) (fin - inicio));

    return 0;
}