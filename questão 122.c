#include <stdio.h>

/*
122. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.
*/

int main() {
    int matriz[3][3];
    int soma = 0;
    
    /*
    Nesta etapa é feita a declaração da "matriz 3 x 3" e da variável "soma". Posteriormente, é pedido ao
    usuário a inserção dos valores da matriz.
    */ 
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Aqui será realizada a impressão da matriz para o usuário ter uma noção de onde está os elementos abaixo da diagonal principal.
    
    printf("\nMatriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    /*
    Aqui nesta etapa, utilizando o laço "for" é feito o cálculo da soma dos elementos que se encontram
    abaixo da diagonal principal. 
    */
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }
    
    // Nesta etapa, é feita a impressão do resultado para o usuário.

    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);
    
    return 0;
}