#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o tabuleiro com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Coordenadas iniciais para os navios
    int linhaNavioVertical = 1; // Linha inicial do navio vertical
    int colunaNavioVertical = 1; // Coluna inicial do navio vertical

    int linhaNavioHorizontal = 5; // Linha inicial do navio horizontal
    int colunaNavioHorizontal = 4; // Coluna inicial do navio horizontal

    // Posiciona o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3; // Marca a posição do navio
    }

    // Posiciona o navio horizontal
    for (int j = 0; j < TAMANHO_NAVIO; j++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + j] = 3; // Marca a posição do navio
    }

    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}

