#include <stdio.h>

// Jogo de xadrez - Nível Novato
// Movimentação das peças: Torre (5 casas direita), Bispo (5 casas cima/direita) e Rainha (8 casas esquerda)

int main() {

    int t, b = 0, r = 1;

    //Boas-vindas ao jogo
    printf("### Bem-vindo ao Jogo de Xadrez do Desafio Novato! ###\n");

    // Início com movimentação da Torre utilizando o loop for
    printf("\nVamos iniciar o jogo com a movimentação da peça Torre com 5 casas para a direita:\n");

    for (t = 1; t <= 5; t++){
        printf("Direita\n");
    }
    //Finalização da movimentação da Torre

    //Início da movimentação do Bispo utilizando o loop while
    printf("\nAgora vamos seguir para a movimentação do Bispo em diagonal com 5 casas para cima e direita:\n");

    while (b < 5){
        printf("Cima direita\n");
        
        b++;
    }
    //Finalização da movimentação do Bispo

    //Início da movimentação da Rainha utilizando o loop do-while
    printf("\nPor fim, vamos mover a Rainha 8 casas para a esquerda:\n");

    do {
        printf("Esquerda\n");

        r++;
    } while (r <=8);

    

    return 0;
}
