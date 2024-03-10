#include<stdio.h>
#include<stdlib.h>

int main(){

    char part;
    int x = 0;

    printf("responda o questionario com S e N \n ");
    
    printf("Telefonou para a vitima?\n ");
    scanf("%c",&part);
    if(part =='S'|| part== 's'){
        x++;
    }

    fflush(stdin);
    printf("Esteve no local do crime?\n ");
    scanf("%c",&part);
    if(part =='S'|| part== 's'){
         x++;
    }

    fflush(stdin);
    printf("Mora perto da vitima?\n ");
    scanf("%c",&part);
    if(part =='S'|| part== 's'){
        x++;
    }
    
    fflush(stdin);
    printf("Devia para a vitima?\n ");
    scanf("%c",&part);
    if(part =='S'|| part== 's'){
        x++;
    }

    fflush(stdin);
    printf("Ja trabalhou com a vitima?\n ");
    scanf("%c",&part);
    if(part =='S'|| part== 's'){
         x++;
    }

    if(x == 2){
        printf("suspeita");
    } else if (x == 3 || x == 4 ){
        printf("cumplice");
    } else if (x == 5){
        printf("assasino");
    } else {
        printf("inocente");
    }

 




    return 0;
}