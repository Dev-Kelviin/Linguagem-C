#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float delta(float a, float b, float c){
float delta;
delta = pow(b,2) - 4*a*c;
return delta;
}

int main(){

float a, b, c;
printf("informe os valores dos coeficientes para calcular uma equacacao do segundo grau \n");
scanf("%f%f%f",&a,&b,&c);


printf("o valor de delta e %f", delta(a,b,c));

}

