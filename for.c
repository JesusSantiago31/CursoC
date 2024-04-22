#include <stdio.h>

int main(){
    int vector [10];

    int i = 0;
    for (i=0; i<10 ; i++){
        vector[i]=10;
        printf("El valor en la posicion [%d]es de = %d \n", i, vector[i]);
    }
    return 0;
}