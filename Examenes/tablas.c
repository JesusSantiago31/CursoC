#include <stdio.h>
int tablaMultiplicar(int num, int multiplicador);
int calcularTablas (int num);
int main(){
    int num =1;
    calcularTablas(num);
 
 return 0;
}
int calcularTablas (int num){
    if (num <=100){
    printf("\n Tablas del %d: \n", num);
    tablaMultiplicar(num,1);
    calcularTablas(num+1);
    
 }
}

int tablaMultiplicar(int num, int multiplicador){
    if(multiplicador<=10){
        printf("\n %d * %d = %d", num, multiplicador, num*multiplicador);
        tablaMultiplicar(num, multiplicador + 1);
    }
    
}
