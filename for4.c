#include <stdio.h>

int main(){
    int i = 1;
    int numero = 3;

    printf("A\tA+2\tA+4\tA+6 \n");

    for (i=0 ; i<=3 ; i++){
        printf("%d\t", numero);
        numero+=2;
    }
    printf("\n " );
    numero = 6;
    for (i=0 ; i<=3 ; i++){
        printf("%d\t", numero);
        numero+=2;
    }
    printf("\n ");
    numero = 9;
    for (i=0 ; i<=3 ; i++){
        printf("%d\t", numero);
        numero+=2;
    }
    printf("\n");
    numero = 12;
    for (i=0 ; i<=3 ; i++){
        printf("%d\t", numero);
        numero+=2;
    }
    return 0;
}