#include <stdio.h>

int main(){
    int aniosEmpresa, sueldo;
    float sueldoM;
    printf("Cuantos años llevas en la empresa ");
    scanf("%d", &aniosEmpresa);

    printf("Cual es tu sueldo mensual ");
    scanf("%d", &sueldo);    

    if(aniosEmpresa>=5){
        sueldoM = sueldo * 0.10;
        if(sueldoM>1000)
            puts("ERES sujeto a un credito hipotecario");
    }    
    return 0;
}