#include <stdio.h>

int main() {
    
    int tabuleiro[10][10] = {0};  // Inicializa o tabuleiro com água (0)
    int i, j;

    // Coordenadas e posicionamento dos navios
    int linha_h = 2, coluna_h = 3;  // Posição inicial do navio horizontal
    int linha_v = 5, coluna_v = 4;  // Posição inicial do navio vertical

    // Coloca o navio horizontal (ocupa 3 posições)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    // Coloca o navio vertical (ocupa 3 posições)
    for (i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    // Exibe o cabeçalho com as letras das colunas (A a J)
    printf("    ");
    for (i = 0; i < 10; i++) {
        printf("%c ", 'A' + i);
    }
    printf("\n");

    // Exibe o tabuleiro com as linhas numeradas
    for (i = 0; i < 10; i++) {
        printf("%2d  ", i);  // Imprime o número da linha
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // Imprime o valor da célula
        }
        printf("\n");
    }

    return 0;
}