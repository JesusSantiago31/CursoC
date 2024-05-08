#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n;
    char *buffer;
    printf("Teclea la logitud de la cadena");
    scanf("%d",&i);

    buffer = (char*) malloc((i+1)*sizeof(char));
    if (buffer==NULL) exit(1);

    for(n=0; n<1 ; n++)
        buffer[n]=rand()%26+'a';
        
    buffer[i]='\0';
    printf("Random String %s\n",buffer);
    free(buffer);

    return 0;
}