#include <stdio.h>

int main(){
    int numeroR;
    int suma = 0;
    int i;
    printf("Ingresa un numero");
    scanf ("%d", &numeroR);

    for(i=1 ; i<= numeroR ; i++){
        suma += i;
        printf("%d + ", i);
    }
    printf("= %d", suma);
    return 0;
}