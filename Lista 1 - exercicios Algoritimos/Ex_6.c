#include<stdio.h>
#include<stdlib.h>
int main(){

    float c, f, k;

    printf("Iinforme o valor de uma temperatura em graus celsus para convertermos para fahrenheit e kelvin \n ");
    scanf("%f",&c);
    
    f = (c * 9/5) + 32;
    k = c + 273.15; 

    printf(" %.1f Garus celsus correspondem a %.1f garus fahrenheit \n ",c ,f); 
    printf("%.1f Garus celsus correspondem a %.3f garus kelvin \n ",c ,k); 



    system("pause");
}
