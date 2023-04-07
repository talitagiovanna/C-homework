#include <stdio.h>

/*
100. Escreva um programa para:
a. pedir 10 números ao usuário e armazenar esses valores em um array;
b. pedir um outro número ao usuário e calcular e mostrar quantos números do array são inferiores a esse número.
*/

int main() {
    int lista[10]; // declaração da lista com capacidade para 10 elementos.
    int numero, contador = 0;

// Neste laço "for" é pedido ao usuário 10 números que serão armazenados numa lista "lista".
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &lista[i]);
    }

    // Nesta etapa do código é pedido ao usuário que insira outro número para que seja realizado a próxima etapa.
    printf("Digite um número para comparar: ");
    scanf("%d", &numero);

    // Neste laço "for" é percorrido os elementos da lista e é feito a conta de quantos números são inferiores ao "numero".
    for (int i = 0; i < 10; i++) {
        if (lista[i] < numero) {
            contador++;
        }
    }

    printf("Existem %d números na lista inferiores a %d.\n", contador, numero);

    return 0;
}