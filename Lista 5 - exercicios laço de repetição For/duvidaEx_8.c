#include<stdio.h>
#include<stdlib.h>

int main (){

    int x, n, limite, a=1, ant, suc;


    printf("informe o numero innicial desejado para sequencia de termos de Fibonacci, sendo os priemiros numeros fixos 0,1 \n");
    scanf("%i",&n);

    printf("quantos numeros deseja ser exibido? \n");
    scanf("%i",&limite);

    for(x=n; x<=limite; x++){
      suc = a + n; // 0= 1+1(n) = 2
      ant = n; // 0 = 1(n) ant = 1
      while(suc >= ant || suc==limite){ // suc >= ant == 2 > 1
        suc = ant + suc; // 2 = 1 +2  == 3
        
        printf(",%i,",suc);
      }
      
    }







    return 0;
}