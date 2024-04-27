#include <stdio.h>

struct ATLETA{
    char deporte[20];
    char nombre[20];
    char pais[15];
    int n_medallas;
};

int main(){
    struct ATLETA at1[3];
    int i,v = 0, e;
for (i=0; i<3 ; i++){
    printf("Ingresa el deporte: ");
    scanf("%s", at1[i].deporte);
    
    printf("Ingresa el nombre: ");
    scanf("%s", at1[i].nombre);

    printf("Ingresa el pais: ");
    scanf("%s", at1[i].pais);

    printf("Ingresa el numero de medallas: ");
    scanf("%d", &at1[i].n_medallas);

    if (at1[i].n_medallas>v){
        v = at1[i].n_medallas;
        e = i;
    }
}
    printf("\n....\nDeporte: %s\nNombre: %s\nPais: %s\nNum_Medallas: %d\n", at1[e].deporte, at1[e].nombre, at1[e].pais, at1[e].n_medallas);    
    
    return 0;
    
}
