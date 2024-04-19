#include <stdio.h>

int main(){
    int horasT;
    int salarioH;
    int sueldoT;
    int horasE;

    printf("Ingrese las horas totaes trabajadas: ");
    scanf("%d", &horasT);    
    printf("\n");

    printf("Ingrese el sueldo por hora: ");
    scanf("%d", &salarioH);
    printf("\n");

    
    if (horasT <= 40){
        sueldoT = horasT * salarioH;    
    }else if (horasT > 40 ){
        horasE = (horasT-40);
        sueldoT = (salarioH * 40) + ((horasE * 1.5)*salarioH);
    }
    printf("Tu salario total es de : %d", sueldoT);

    return 0;
}