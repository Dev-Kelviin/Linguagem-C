#include<stdio.h>

metros(float m, float dec, float cent, float mili ){

    dec= m * 10;
    cent= m * 100;
    mili= m * 1000;

    printf("o valor de %.2f metros em decimetros e %.2f\n",m,dec);
    printf("o valor de %.2f metros em centimetros e %.2f\n",m,cent);
    printf("o valor de %.2f metros em milimetros e %.2f\n",m,mili);

}




int main(){

    float m, cent, dec, mili;

    printf("informe um valor em metros \n");
    scanf("%f",&m);

    metros(m,cent,dec,mili);

    return 0;
}