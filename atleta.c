#include <stdio.h>

struct ATLETA{
    char deporte[20];
    char nombre[20];
    char pais[15];
    int n_medallas;
};

int main(){
    struct ATLETA at1;

    printf("Ingresa el deporte: ");
    scanf("%s", at1.deporte);
    
    printf("Ingresa el nombre: ");
    scanf("%s", at1.nombre);

    printf("Ingresa el pais: ");
    scanf("%s", at1.pais);

    printf("Ingresa el numero de medallas: ");
    scanf("%d", &at1.n_medallas);

    printf("\n....\nDeporte: %s\nNombre: %s\nPais: %s\nNum_Medallas: %d\n", at1.deporte, at1.nombre, at1.pais, at1.n_medallas);    
    
    return 0;
    
}
