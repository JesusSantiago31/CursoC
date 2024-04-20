#include <stdio.h>

int main(){
    int vector [100];
    int contador = 99;

    while(contador>=0){
        vector [contador] = (contador+1);
        printf("El arreglo en la posicion [%d] es = %d \n", contador, vector[contador]);
        contador--;
    }
    puts("Fin del programa");

    return 0;
}