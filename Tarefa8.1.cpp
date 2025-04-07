#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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
    }else if (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2)){
        printf("Os valores digitados formam um triangulo retangulo\n");
    }else{
        printf("Os valores digitados formam um triangulo nao retangulo\n");
    }
    getchar();
    return 0;
}
