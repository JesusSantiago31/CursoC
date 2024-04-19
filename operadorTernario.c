#include <stdio.h>

int main(){
    int descuento = 10;
    int descuentpCliente = 20;
    int cliente = 0;
    int z = 0;

    z = (cliente) ? descuentpCliente : descuento;
    printf("El descuento es de %d ", z);

    printf("Fin del programa \n");
    return 0;
}