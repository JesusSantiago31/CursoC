#include <stdio.h>
#include <string.h>

char inv(char cadena, int len);
int main(){
    char cadena[20];
    int len,i ;

    printf("Ingresa una cadena: ");
    scanf("%s", cadena);
    len = strlen(cadena);
    for( i=(len-1); i>=0; i--){
        printf("%c ", cadena[i]);
    }
        
    return 0;
}
