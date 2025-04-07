#include<stdio.h>
#include<stdlib.h>

int main (){
    int a, b, c;
    printf("Digite os tres valores que quer ordenar:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c){
        if(b > c){
            printf("A ordem crescente eh: %d %d %d\n", c, b, a);
        }else{
            printf("A ordem crescente eh: %d %d %d\n", b, c, a);
        }
    }else if(b > a && b > c){
        if(a > c){
            printf("A ordem crescente eh: %d %d %d\n", c, a, b);
        }else{
            printf("A ordem crescente eh: %d %d %d\n", a, c, b);
        }
    }else if(c > a && c > b){
        if(a > b){
            printf("A ordem crescente eh: %d %d %d\n", b, a, c);
        }else{
            printf("A ordem crescente eh: %d %d %d\n", a, b, c);
        }
    }
    getchar();
    return(0);
}