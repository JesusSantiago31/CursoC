#include <stdio.h>
int main (){    
    int x=1;    
    while (x<500){
        printf("%d, %d, %d \n" , x, (x * x), (x * x * x));
        x++;
    }
    return 0;
}