#include<stdio.h>
#include<stdlib.h>
int main(){

int n, soma, a[6] = { 1, 0, 5, -2, -5, 7};

soma = a[0] + a[1] + a[5];
printf("a soma dos numeros selecionados e %i \n", soma);

a[4] = 100;

for(n=0; n<=5; n++){
    printf("%i \n",a[n]);
  
}
}