#include <stdio.h>

int main(){
 float calif;

puts("Introduce la calificacion del examen en escala de 0 a 10: ");
scanf("%f", &calif);

if(calif >= 7){
    puts("!Felicidades aprobaste el curso¡");
}
return 0;

}