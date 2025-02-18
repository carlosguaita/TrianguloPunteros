#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresoComponente(char comp, int i){
    float p;
    printf("Ingrese la componente %c del punto %d: \n",comp,i);
    scanf("%f",&p);
    return p;
}

void distancias(float *a, float *b, float *c, float p[3][2]){
    *a=sqrt(pow(p[0][0]-p[1][0],2)+pow(p[0][1]-p[1][1],2));
    *b=sqrt(pow(p[0][0]-p[2][0],2)+pow(p[0][1]-p[2][1],2));
    *c=sqrt(pow(p[1][0]-p[2][0],2)+pow(p[1][1]-p[2][1],2));
}

void perimetro(float *p, float *s, float *a, float *b, float *c){
    *p=*a + *b + *c;
    *s=*p/2;
}

float area(float *s, float *a, float *b, float *c){
    float area;
    area = sqrt(*s * (*s-*a) * (*s-*b) * (*s-*c));
    return area;
}