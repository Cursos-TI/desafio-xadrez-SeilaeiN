//Desafio Novato - Movimentação de peças de xadrez

#include <stdio.h>

// Declaração de variaveis da quantidade de casas para movimentações das peças de xadrez Torre, Bispo e Rainha
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("\n****Sejam Bem vindos ao jogo de Xadrez**** \n");
        
    printf("\nOnde vamos brincar com o movimento das peças Torre, Bispo e Rainha.\n");
        
    printf("\n****Espero que se divirtam!!!****\n");

    // Executando a Movimentação da Torre utilizando a estrutura For
    printf("\nMovimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("%d Direita\n", i+1);
    }

    // Executando o Movimento do Bispo utilizando a estrutura While
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("%d Cima, Direita\n", i+1);
        i++;
    }

    // Movimento da Rainha utilizando a estrutura do-while
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("%d Esquerda\n",i+1);
        i++;
    } while (i < casasRainha);

    return 0;
}
