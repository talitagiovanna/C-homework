#include <stdio.h>

/*
67. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
*/

int main() {
    int valores[6];

    /*
    Declara-se uma lista de 6 valores "valores[6]", onde irá ser armazenado cada número inteiro utilizando
    o laço "for" para fazer isso.
    */

    printf("Digite 6 números inteiros:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos na ordem inversa:\n");

    /*
    Nesse segundo laço "for" é feito a verificação de cada número da lista "valores", com isso fazendo
    a leitura dos números de forma inversa e mostrando ao usuário na saída.
    */

    for (int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }

    printf("\n");

    return 0;
}