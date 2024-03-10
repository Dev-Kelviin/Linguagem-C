#include<stdio.h>
#include<stdlib.h>

int main(){

int a[10], b[10], c[10], x;

printf("informe 10 valores para preencher o priemro vetor \n");

for(x=0; x<=9; x++){
scanf("%i", &a[x]);
}

printf("informe 10 valores para preencher o segundo vetor \n");
for(x=0; x<=9; x++){
scanf("%i", &b[x]);
}

for(x=0; x<=9; x++){
if(a[x] > b[x]){
    c[x] = +1;
} else if (a[x] == b[x]){
    c[x] = 0;
} else if (a[x] < b[x]){
    c[x] = -1;
}
}

printf("vetor c igual a:\n");
for(x=0; x<=9; x++){
    printf("%i\n",c[x]);
}

}

