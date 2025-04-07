#include<stdio.h>
#include<stdlib.h>

int main (){
    int a;
    printf("Digite um numero que o retornaremos em um valor absoluto:\n");
    scanf("%d", &a);
    
    if(a > 0){
        printf("O numero ja eh positivo!\n");
    }else if(a < 0){
        a = a * -1;
        printf("O numero em valor absoluto eh: %d\n", a);
    }
    getchar();
    return(0);
}