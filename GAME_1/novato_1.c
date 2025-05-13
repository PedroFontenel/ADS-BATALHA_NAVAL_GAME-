#include <stdio.h>

int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tabuleiro[10][10];
    
    // Inicializando todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navio_horizontal[3] = {3, 3, 3};  
    int x_h = 2, y_h = 4; //Escolhendo coordenadas iniciais do Navio horizontal 

    // Posicionando navio horizontal no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_h][y_h + i] = navio_horizontal[i]; // Movendo na horizontal
    }

    int navio_vertical[3] = {3, 3, 3};  
    int x_v = 1, y_v = 3; //Escolhendo coordenadas iniciais do Navio vertical

    // Posicionando navio vertical no tabuleiro
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_v + i][y_v] = navio_vertical[i]; // Movendo na vertical
    }

    // Exibindo o tabuleiro
    printf("**TABULEIRO BATALHA NAVAL**\n");
    printf("  "); // Espaço para alinhamento
    
    // Imprimir os cabeçalhos das colunas
    for (int j = 0; j < 10; j++) {
        printf(" %d", coluna[j]);
    }
    printf("\n");

    // Imprimir as linhas com os identificadores
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // Imprimir a letra da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]); // Imprimir valores do tabuleiro
        }
        printf("\n");
    }

    return 0;
}