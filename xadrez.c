//Desafio Aventureiro - Movimentação de peças de xadrez

#include <stdio.h>

// Declaração de variáveis da quantidade de casas para movimentações das peças de xadrez Torre, Bispo e Rainha
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("\n****Sejam Bem vindos ao jogo de Xadrez**** \n");
        
    printf("\nOnde vamos brincar com o movimento das peças Torre, Bispo e Rainha.\n");
        
    printf("\n****Espero que se divirtam!!!****\n");

    // Executando a Movimentação da Torre utilizando a estrutura For
    printf("\nMovimento da Torre:\n");
    for (int casas = 0; casas < casasTorre; casas++) {
        printf("%d Direita\n", casas + 1);
    }

    // Executando o Movimento do Bispo utilizando a estrutura While
    printf("\nMovimento do Bispo:\n");
    int casas = 0;
    while (casas < casasBispo) {
        printf("%d Cima, Direita\n", casas + 1);
        casas++;
    }

    // Movimento da Rainha utilizando a estrutura do-while
    printf("\nMovimento da Rainha:\n");
    casas = 0;
    do {
        printf("%d Esquerda\n", casas + 1);
        casas++;
    } while (casas < casasRainha);

    // Adicionando a lógica para movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    int movimentosCavalo = 2;
    for (casas = 0; casas < movimentosCavalo; casas++) {
        printf("%d Baixo\n",casas +1);
    }
    casas = 0;
    while (casas < 1) {
        printf("%d Esquerda\n", casas + 1);
        casas++;
    }

    return 0;
}
