#include<stdio.h>
#include<stdlib.h>

int main (){
    int a;
    printf("Digite um numero:\n");
    scanf("%d", &a);
    
    if(a == 0){
        printf("O numero eh zero\n");
    }else if(a > 0){
        printf("O numero eh positivo\n");
    }else if(a < 0){
        printf("O numero eh negativo\n");
    }
    getchar();
    return(0);
}