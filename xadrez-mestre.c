#include <stdio.h>

//Nível Mestre - mudança para movimento das peças usando Recursividade e loops aninhados complexos

void moveTorre(int casas){
    if (casas > 0){
        printf("Direita\n");
        moveTorre(casas - 1);
    }
}

void moveRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moveRainha(casas - 1);
    
    }
}

void moveBispo(int casas){
    if(casas > 0){
        printf("Cima direita\n");
        moveBispo(casas - 1);
    }
}

int main () {

    int hor = 1;

    //Boas-vindas ao jogo
    printf("### Bem-vindo ao Jogo de Xadrez do Desafio MESTRE! ###\n");

    // Início com movimentação da Torre, do Bispo e da Rainha utilizando a recursividade

    printf("\nVamos iniciar o jogo com a movimentação da peça Torre com 5 casas para a direita:\n");
    moveTorre(5);

    printf("\nAgora, vamos mover a Rainha 8 casas para a esquerda:\n");
    moveRainha(8);

    printf("\nSeguimos para a movimentação do Bispo em diagonal com 5 casas para cima e direita:\n");
    moveBispo(5);

    //Cavalo move em L 2 casas para cima e 1 casa para a direita
    printf("\nVamos incluir ao jogo a peça Cavalo, movendo em L, 2 casas para cima e 1 para direita:\n");

    for (int cima = 1, direita = 0; cima <= 2 || direita < 1; ){
        if (cima <= 2){
            printf("Cima\n");
            cima++;
        } else if (direita < 1){
            printf("Direita\n");
            direita++;
        }
    }

    printf("\nE assim finalizamos o jogo de xadrez do Nível Mestre!\n");
     
    //Finalização do Jogo nível Mestre

return 0;    

}