#include <stdio.h>
#include <math.h>
float operacion(int ladoA, int ladoB, int ladoC);
int main(){
    int ladoA, ladoB, ladoC;          

    printf("Introduce el Valor de LADO A: ");
    scanf("%d", &ladoA);
    printf("Introduce el Valor de LADO B: ");
    scanf("%d", &ladoB);
    printf("Introduce el Valor de LADO C: ");
    scanf("%d", &ladoC);
   
    printf("El area del triangulo es: %f", operacion(ladoA, ladoA, ladoC));

    return 0;

}
float operacion(int ladoA, int ladoB, int ladoC){
    float p;
    float areaTriangulo, raiz;
     p = ((ladoA+ladoB+ladoC)/2);

    areaTriangulo = (p*(p-ladoA)*(p-ladoB)*(p-ladoC));
    raiz = (sqrt(areaTriangulo));
    return raiz;
    
}