#include<stdio.h>
#include<stdlib.h>

float media(float n1, float n2, float n3, float pond, float arit, char op){
    
    switch(op){
    case 'A':
    case 'a':

    arit = (n1 + n2 + n3)/3;
    printf("a media aritimatica das notas e %.2f",arit);
    return arit;
    break;

    case 'P':
    case 'p':
    pond = (n1*5 + n2*3 + n3*2)/10;
    printf("o resultado da media ponderada e %.2f",pond);
    return pond;
    break;

    default:
    break;

}
}



int main(){

float n1,n2,n3,pond, arit;
char op;

printf("informe as notas do aluno para calcular a media \n");
scanf("%f%f%f",&n1,&n2,&n3);

printf("A - para calcular media aritimetica \n");
printf("P - para calcular media ponderada \n");
scanf("%s",&op);

media(n1,n2,n3,pond,arit,op);

}