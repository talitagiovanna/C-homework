#include <stdio.h>

/*
78. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i)%(i + 1), sendo i, 
a posição do elemento no vetor. Em seguida imprima o vetor na tela.
*/

int main() {

    /*
    Primeiramente, o código começa declarando uma lista de inteiros chamado vetor com 50 elementos. 
    */
    int vetor[50];

    /*
    Neste laço "for" irá ser percorrido todos os elementos da lista e irá preencher cada elemento no vetor
    com o resultado do cálculo realizado. 
    */

    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    printf("Vetor preenchido:\n");

    /*
    Neste "for" será realizado a impressão para o usuário de cada elemento do vetor que foi preenchido
    com o resultado do cálculo realizado anteriormente.
    */

    for (int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}