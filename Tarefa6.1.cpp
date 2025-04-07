#include<stdio.h>
#include<stdlib.h>

int main (){
    int a, b, c;
    printf("Digite o valor do lado A: ");
    scanf("%d", &a);
    printf("Digite o valor do lado B: ");
    scanf("%d", &b);
    printf("Digite o valor do lado C: ");
    scanf("%d", &c);
    if (a + b < c || a + c < b || b + c < a){
        printf("Os valores digitados nao formam um triangulo\n");
    }else if (a == b && b == c){
        printf("O triangulo eh equilatero\n");
    }else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)){
        printf("O triangulo eh isosceles\n");
    }else if (a != b && b != c && a != c){
        printf("O triangulo eh escaleno\n");
    }
    getchar();
    return 0;
}
