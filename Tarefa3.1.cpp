#include<stdio.h>
#include<stdlib.h>

int main (){
    int a;
    printf("Digite o numero que queira saber se eh par ou impar:\n");
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("O numero eh par\n");
    }else{
        printf("O numero eh impar\n");
    }
    getchar();
    return(0);
}