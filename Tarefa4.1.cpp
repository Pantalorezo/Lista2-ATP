#include<stdio.h>
#include<stdlib.h>

int main (){
    int idade, servicos;
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    printf("Digite a quantidade de anos de servico:\n");
    scanf("%d", &servicos);
    if(idade <= servicos){
        printf("Voce e o inventor da maquina do tempo, parabens!\n");
    }if(idade >= 65 || servicos >= 30 || (idade >= 60 && servicos >= 25)){
        printf("Voce ja pode se aposentar!\n");
    }else{
        printf("Voce ainda nao pode se aposentar!\n");
    }
    getchar();
    return(0);
}