#include <stdio.h>
#include <stdlib.h>
int main (){

    int ano, mes, idade, id1, id2;

    printf(" Hoje vamor realizar a leitura da idade de uma pessoa expressa em dias \n ");
    printf("Informe a quantidade de anos, depois a quantidade de meses \n ");
    scanf("%i",&ano);
    scanf("%i",&mes);

    id1 = ano * 365;
    id2 = mes * 30;
    idade = id1 + id2;

    printf("A ideade de uma pessoa de %i anos e %i meses expressa em dias e %i \n ",ano ,mes,idade);

    system ("pause");
}