#include <stdio.h>

int main(){
    int edad, minutos;
    printf("Introduce tu edad en años: ");
    scanf("%d", &edad);    
    minutos = edad *365*24*60*60;
    printf("Tue edad %d en segundos es; %d", edad, minutos);
    return 0;
}