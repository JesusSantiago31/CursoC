#include <stdio.h>

struct CD{
    char titulo[100];
    char artista[50];
};

int main(void){
    struct  CD cd1;
    printf("Ingresa Titulo: ");
    scanf("%s", cd1.titulo);

    printf("\n %s \n", cd1.titulo);

    return 0;
    
}