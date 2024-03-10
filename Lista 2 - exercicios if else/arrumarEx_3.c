#include<stdio.h>
#include<stdlib.h>
int main(){

    float A,B,C;

    scanf("%f%f%f",&A,&B,&C);

    if(A < B && C){
        if(B < C){
            printf("%.0f,%.0f,%.0f",A,B,C);
        }if(C < B){
            printf("%.0f,%.0f,%.0f",A,C,B);
        }
    }

    if(B < A && C){
        if(A < C){
            printf("%.0f,%.0f,%.0f",B,A,C);
        }if(C < A){
            printf("%.0f,%.0f,%.0f",B,C,A);
        }
    }

    else if(C < A && B){
        if(A < B){
            printf("%.0f,%.0f,%.0f",C,A,B);
        }if(B < A){
            printf("%.0f,%.0f,%.0f",C,B,A);
        }
    }




}