#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    int *buffer;
    printf("Teclea la logitud de la cadena ");
    scanf("%d",&i);

    buffer = (int*) malloc((i+1)*sizeof(int));
    if (buffer==NULL) exit(1);

    for(n=0; n<i ; n++){
        printf("Ingresa el valor en la posicion %d ", n);
        scanf("%d", &buffer[n]);
        printf("\n");
        
    }
    for(n=0; n<i ; n++){
        printf("Buffer [%d]: %d\n", n,  buffer[n]);
        
    }   
        
    buffer[i]='\0';        
    free(buffer);

    return 0;
}