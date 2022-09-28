#include <stdio.h>

int main() {
    // title
    printf("****************************************** \n");
    printf("* Bem-vindo ao nosso jogo de adivinhação * \n");
    printf("****************************************** \n");

    int numero = 4;

    int chute;  

    printf("chute um numero");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    if (chute == numero){
        printf("resposta certa!! \n");
    }
    
    else{
        printf("ops, resposta errada!! \n");
    }    

}