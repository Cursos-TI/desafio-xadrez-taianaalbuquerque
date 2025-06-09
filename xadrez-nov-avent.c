#include <stdio.h>

// Jogo de xadrez - Nível Novato
// Movimentação das peças: Torre (5 casas direita), Bispo (5 casas cima/direita) e Rainha (8 casas esquerda)

int main() {

    int t, b = 0, r = 1, c = 0, cb;

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

    //Inclusão do nível Aventureiro peça Cavalo
    //Cavalo move em L
    printf("\nVamos incluir ao jogo a peça Cavalo, movendo em L, 2 casas para baixo e 1 para esquerda:\n");

    for (c=1; c < 2; c++){
        while (cb < 2){
        
            printf("Baixo\n");

            cb++;

        }

        printf("Esquerda\n");

    }

    

    return 0;
}
