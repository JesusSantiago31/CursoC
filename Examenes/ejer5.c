#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int i,n;
    int * buffer;
    
    printf("En que año naciste");
    
    
    clock_t inicio = clock();
    buffer = (int*)malloc((i+1)*sizeof(int));
    if(buffer==NULL)exit(1);

    for(n=0;n<1;n++){
        scanf("%d",&buffer[n]);
        buffer[n]=2024 - buffer[n];
        printf("tienes %d años de edad\n",buffer[n]);
        buffer[n+1]=buffer[n]*12;
        printf("tienes %d meses de edad\n",buffer[n+1]);
        buffer[n+2]=buffer[n]*365;
        printf("tienes %d dias de edad\n",buffer[n+2]);

    buffer[i]='\0';
    }
    
    
    free(buffer);
    clock_t fin = clock();
    double tiempototal= (double)(fin - inicio) /CLOCKS_PER_SEC;

    printf("Segundos que tardo en ejecutarse: %f \n", tiempototal);
    printf("Ciclos de reloj que tardo en ejecutarse: %f\n", (double) (fin - inicio));
    return 0;
}