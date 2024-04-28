#include <stdio.h>
int main(){
int x,y;
printf("Valor x : %d", x);
int *p;

p = &x;
y = *p+3;
printf("El valor de y es %d", y);
}