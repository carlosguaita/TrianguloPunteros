#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float puntos[3][2];
    float area1, p1, s1, a, b, c;
    
    puntos[0][0]=ingresoComponente('X',1);
    puntos[0][1]=ingresoComponente('Y',1);
    puntos[1][0]=ingresoComponente('X',2);
    puntos[1][1]=ingresoComponente('Y',2);
    puntos[2][0]=ingresoComponente('X',3);
    puntos[2][1]=ingresoComponente('Y',3);

    distancias(&a,&b,&c,puntos);
    perimetro(&p1,&s1,&a,&b,&c);
    area1=area(&s1,&a,&b,&c);
    printf("EL perimetro es: %f\n",p1);
    printf("El area es: %f\n",area1);



    return 0;
}