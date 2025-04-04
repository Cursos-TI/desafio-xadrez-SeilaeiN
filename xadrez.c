//Desafio Mestre - Movimentação de peças de xadrez com recursividade e loops complexos

#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("%d Direita\n", 6 - casas);
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispo(int horizontal, int vertical) {
    if (horizontal == 0 || vertical == 0) return;
    printf("%d Cima, Direita\n", 6 - horizontal);
    moverBispo(horizontal - 1, vertical - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("%d Esquerda\n", 9 - casas);
    moverRainha(casas - 1);
}

// Função para movimentar o Cavalo utilizando loops complexos
void moverCavalo(int movimentos) {
    for (int movimento = 0; movimento < movimentos; movimento++) {
        // Movimentar duas casas para cima
        for (int movimentoVertical = 0; movimentoVertical < 2; movimentoVertical++) {
            printf("%d Cima\n", movimentoVertical + 1);
        }
        // Movimentar uma casa para a direita
        printf("%d Direita\n", 3);
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("\n****Sejam Bem vindos ao jogo de Xadrez**** \n");
        
    printf("\nOnde vamos brincar com o movimento das peças Torre, Bispo, Rainha e Cavalo.\n");
        
    printf("\n****Espero que se divirtam!!!****\n");

    // Movimentação da Torre utilizando recursividade
    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimentação do Bispo utilizando recursividade e loops aninhados
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo, casasBispo);

    // Movimentação da Rainha utilizando recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimentação do Cavalo utilizando loops complexos
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}

    return 0;
}
