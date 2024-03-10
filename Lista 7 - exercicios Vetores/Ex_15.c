#include<stdio.h>
#include<stdlib.h>
int main (){

int c, i, j, x, a[5], b[5];

printf("informe 10 numeros para o primeiro vetor \n");
for(x=0; x<=4; x++){
    scanf("%i", &a[x]);
}

printf("informe 10 numeros para o segundo vetor \n");
for(x=0; x<=4; x++){
    scanf("%i", &b[x]);
}

for(i=0; i<=4; i++){
    for(j=0; j<=4; j++){
        x=0;
        if(a[i]==b[j]){
        c ++;
        }
    }
}

printf("%i \n",c);






}