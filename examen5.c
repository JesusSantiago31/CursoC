#include <stdio.h>//mistake 1
void multiplyMatrices(int m1, int n1, int m2, int n2, int first[] [10], int second[] [10], int result[] [10]);

int main() {

int first[10][10], second [10][10], result[10][10];

int m1, n1, m2, n2;

printf("Introduce el número de filas y columnas de la primera matriz: "); //mistake2

scanf("%d %d", &m1 , &n1);

printf("Introduce el número de filas y columnas de la segunda matriz: ");

scanf("%d %d", &m2, &n2);//Mistake3

if (n1 != m2) {

printf("No se pueden multiplicar las matrices. El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz.\n");

return 0;
}

printf("Introduce los elementos de la primera matriz:\n");

for (int i=0;i<m1;++i){

for (int j=0;j<n1; ++j) {

scanf("%d", &first[i][j]);
}
}

printf("Introduce los elementos de la segunda matriz:\n");////MISTAKE 4

for (int i=0;i<m2;++i){

for (int j=0;j<n2;++j){

scanf("%d", &second[i][j]);

}

} 
multiplyMatrices(m1, n1, m2, n2, first, second, result);

// Mostrar el resultado

printf("El resultado de la multiplicación de las matrices es:\n");

for (int i=0; i<m1; ++i) {

for (int j=0;j<n2; ++j) {

printf("%d", result[i][j]);

if (j==n2-1)

printf("\n");

}
}

return 0;
}
//mistake 5
void multiplyMatrices(int m1, int n1, int m2, int n2, int first[] [10], int second[] [10], int result[][10]) {

for ( int i=0;i<m1;++i){

for (int j=0;j<n2; ++j) {

result[i][j] = 0;
}
}

for (int i=0;i<m1;++i){

for(int j=0;j<n2;++j){

for (int k=0; k<n1; ++k) {

result[i][j] += first[i][k]* second[k][j];
}
}
}
}