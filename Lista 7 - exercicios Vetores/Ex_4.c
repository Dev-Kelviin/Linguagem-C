#include<stdio.h>
#include<stdlib.h>

int main(){

int x, a[5], b[5], c[5], i=0;

printf("infrome 5 valores para o vetor 1 \n");
for(x=0; x<=4; x++){
    scanf("%i",&a[x]);
}

printf("infrome 5 valores para o vetor 2 \n");
for(x=0; x<=4; x++){
    scanf("%i",&b[x]);
}

for(x=0; x<5; x++){
  c[x] = a[x] + b[x];
  
   
}

printf("a soma do vetor 1 e 2 resultou no vetor 3, segue os valores da soma \n");
for(x=0; x<=4; x++){
    printf("A%i = %i \n",i ,c[x]);
    i++;
}
}