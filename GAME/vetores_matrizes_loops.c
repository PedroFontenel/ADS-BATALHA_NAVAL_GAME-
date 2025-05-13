#include <stdio.h>

int main(){
    
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros
 
    // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j; // Atribuindo valores à matriz
        }
    }
 
    // Exibindo os elementos da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];
 
    // Somando as duas matrizes
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
 
    // Exibindo a matriz resultante
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }
    
    return 0;

}


    