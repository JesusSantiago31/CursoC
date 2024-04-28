#include <stdio.h>

struct EMPLEADO{
    char nombre[20];
    char sexo[8];
    int sueldo;
};

int main(){
    struct EMPLEADO em1[5];
    int i,v=1000, e;
for(i=0 ; i<5 ; i++){
    printf("\nIngresa el nombre: ");
    scanf("%s", em1[i].nombre);
    
    printf("Ingresa el sexo: ");
    scanf("%s", em1[i].sexo);

    printf("Ingresa el sueldo: ");
    scanf("%d", &em1[i].sueldo);
    
    if(v > em1[i].sueldo){
        v = em1[i].sueldo;
        e = i;
    }
}
    printf("\n....\nEmpleado: %s \nSexo: %s \nSueldo: %d\n", em1[e].nombre, em1[e].sexo, em1[e].sueldo);

    return 0;
    
}
