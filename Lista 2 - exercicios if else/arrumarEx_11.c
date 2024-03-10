#include<stdio.h>
#include<stdlib.h>

int main(){

    int eleitores, votos;
    float porcentagem;

    printf("para saber mais informacoes da eleicao informe os dados a seguir \n "); 
    
    printf("qual a quantidade de eleitores aptos? \n ");        
    scanf("%i",&eleitores);
    if(eleitores < 20000){
        printf("nao havera segundo turno, quantidade de votos insuficientes");
    } else {
        printf("qual o numero de votos do candidato mais votado? \n ");
    scanf("%i",&votos);

    porcentagem = (votos * 100) / eleitores;
    
    if(porcentagem > 50.0 ){
        printf("nao havera segundo turno, o candidato mais votado teve %.1f porcento dos votos",porcentagem);
    } else {
        printf("havera segundo turno o candidato mais votado teve %.1f porcento dos votos,",porcentagem);
    }
    }

    

    return 0;


}