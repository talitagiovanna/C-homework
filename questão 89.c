#include <stdio.h>

/*
89. Faça um programa que leia dois vetores de 10 elementos. 
Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja,
que contém apenas os números que estão em ambos os vetores. Não deve conter números repetidos.
*/

#define TAM 10 

/*
A função "#define" foi usada para definir um tamanho fixo dos vetores que irão apresentar no código. 
*/

int main() {
    int vetor1[TAM], vetor2[TAM], interseccao[TAM];
    int i, j, k, existe;

    /*
    Aqui foram disponibilados três vetores e algumas variáveis, onde o "vetor1" e "vetor2" receberão os valores de cada  
    leitura feita nos dois primeiros "for" escrito no código abaixo.
    Já o vetor "interseccao" irá receber os valores da intersecção dos dois vetores.
    */
    printf("Digite %d elementos para o primeiro vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite %d elementos para o segundo vetor:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor2[i]);
    }

    /*
    Aqui é onde faz-se a leitura dos dois vetores e compara se há elementos parecidos nos vetores "vetor1" e "vetor2" 
    e adiciona no vetor "interseccao". 
    */
    k = 0;
    for (i = 0; i < TAM; i++) {
        existe = 0;
        for (j = 0; j < TAM; j++) {
            if (vetor1[i] == vetor2[j]) {
                // Aqui se verifica se o elemento já foi adicionado à interseção, para não haver repetição deste número como pedido na questão.
                for (int l = 0; l < k; l++) {
                    if (interseccao[l] == vetor1[i]) {
                        existe = 1;
                        break;
                    }
                }
                if (!existe) {
                    interseccao[k] = vetor1[i];
                    k++;
                }
                break;
            }
        }
    }

    // E aqui é feita a impressão ao usuário da interseção encontrada.
    printf("\nInterseccão:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", interseccao[i]);
    }
    printf("\n");

    return 0;
}