#include <stdio.h>
#include <stdlib.h>
int main(){

    float dist, km, L, CG;

    printf("hoje vamos calcular o consumo medio de seu carro \n");
    printf("supondo que voce encheu 50 lintros de gasolina, informe uma distancia percorrida em Km  \n");
    scanf("%f", &dist);

    L = 50;
    CG = dist / L;

    printf("O consumo medio de seu carro e %.2f Km/L \n",CG);
}