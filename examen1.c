#include <stdio.h>

int main(){
    int numero;
    int i = 0;
    printf("Introduce un valor \n");
    scanf("%d", &numero);

    while ((i<=1000)){
        printf("%d * %d = %d \n", numero, i, (numero*i));
        i++;
    }
    i--;

    while (i>=0){
        printf("%d * %d = %d \n", numero, i, (numero*i));
        i--;
    }

    printf("Fin del programa");
    return 0;    
}