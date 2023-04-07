#include <stdio.h>

/*
133. Faça um programa que leia uma matriz 3 x 6 com valores reais.
a. Imprima a soma de todos os elementos das colunas ímpares.
b. Imprima a média aritmética dos elementos da segunda e quarta colunas.
c. Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
d. Imprima a matriz modificada.
*/

int main() {
    float matriz[3][6];
    int i, j;
    float soma_impares = 0;
    float media_colunas_2_4 = 0;

    // Aqui é realizado a leitura dos valores da matriz.
    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    // Aqui é realizado a soma dos valores das colunas ímpares.
    for (j = 0; j < 6; j += 2) {
        for (i = 0; i < 3; i++) {
            soma_impares += matriz[i][j];
        }
    }
    printf("A soma dos elementos das colunas ímpares é: %.2f\n", soma_impares);

    // Aqui é realizado o cálculo da média aritmética dos elementos da segunda e quarta colunas.
    for (i = 0; i < 3; i++) {
        media_colunas_2_4 += matriz[i][1] + matriz[i][3];
    }
    media_colunas_2_4 /= 6;
    printf("A média aritmética dos elementos das colunas 2ª e 4ª é: %.2f\n", media_colunas_2_4);

    // Aqui é realizado a substituição dos valores da sexta coluna pela soma da primeira e segunda colunas.
    for (i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    // Aqui é realizado a impressão para o usuário da matriz modificada como solicitado na questão.
    printf("Matriz modificada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}