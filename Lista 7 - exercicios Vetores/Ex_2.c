#include<stdlib.h>
#include<stdio.h>

int main(){
 
int b=0, x, a[5];
printf ("informe 5 numeros para preencher o vetor \n");

for(x=0; x<=4; x++){
    scanf("%i",&a[x]);
}

for(x=0; x<=4; x++){
    printf("A%i = %i \n",b ,a[x]);
    b++;
}

}