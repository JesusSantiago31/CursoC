#include <stdio.h>

struct EMPLEADO{
    char nombre[20];
    char sexo[8];
    int sueldo;
};

int main(){
    struct EMPLEADO em1;

    printf("Ingresa el nombre: ");
    scanf("%s", em1.nombre);
    
    printf("Ingresa el sexo: ");
    scanf("%s", em1.sexo);

    printf("Ingresa el sueldo: ");
    scanf("%d", &em1.sueldo);

    printf("\n....\nEmpleado: %s \nSexo: %s \nSueldo: %d\n", em1.nombre, em1.sexo, em1.sueldo);

    return 0;
    
}
