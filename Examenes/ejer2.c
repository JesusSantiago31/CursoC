#include <stdio.h>

struct fraccion{
    int den;
    int num;
};

int main(void)
{
    struct fraccion frac1;
    struct fraccion frac2;
    printf("Dame el numerador de la primera fraccion:\n");
    scanf("%d", &frac1.num);//a
    printf("Dame el denominador de la primera fraccion: \n");
    scanf("%d", &frac1.den);//b
    printf("Dame el numerador de la segunda fraccion: \n");
    scanf("%d", &frac2.num);//c
    printf("Dame el denominador de la primera fraccion: \n");
    scanf("%d", &frac2.den);//d
    suma(frac1,frac2);
    resta(frac1,frac2);
    divicion(frac1, frac2);
    return 0;
    
}

int suma (struct fraccion sum1, struct fraccion sum2){
    printf("Suma\n");
    int arri1= sum1.num * sum2.den;
    int arri2= sum2.num * sum1.den;
    int divab= sum1.den * sum2.den;
    int sumat= arri1 + arri2;
    printf("%d/%d\n\n", sumat, divab);
    return 0;
}

int resta (struct fraccion res1, struct fraccion res2){
    printf("Resta\n");
    int arri1= res1.num * res2.den;
    int arri2= res2.num * res1.den;
    int divaba= res1.den * res2.den;
    int rest= arri1 - arri2;
    printf("%d/%d\n\n", rest, divaba);
    return 0;
}


int divicion (struct fraccion div1, struct fraccion div2){
    printf("Division\n");
    int divnum= div1.num * div2.den;
    int divden= div2.num * div1.den;
    
    printf("%d/%d\n\n", divnum, divden);
    return 0;
}