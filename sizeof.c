#include <stdio.h>
#include <string.h>

int main(){
    char cadena[10];

    printf("un int ocupa %ld bytes \n", sizeof(int));
    printf("Un char ocupa %ld bytes \n", sizeof(char));
    printf("Un float ocupa %ld bytes \n", sizeof(float));
    printf("Un double ocupa %ld bytes \n", sizeof(double));
    printf("Cadena ocupa %ld bytes \n", sizeof(cadena));

    return 0;
}