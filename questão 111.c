#include <stdio.h>

/*
111. Faça um programa que:
a. leia 7 valores inteiros e os armazene em um array. Listar o array com as referidas posições de 
armazenamento de cada valor.
b. ofereça uma função de pesquisa onde dado um valor inteiro qualquer de entrada retornar 
a posição deste valor dentro do array, e caso este valor não esteja presente no vetor retornar –1.
c. ofereça uma função que troque os valores contido no array pela seguinte política: 
cada elemento i dentro do array será substituído pela soma de todos os (i-1) elementos mais o elemento i. 
Por exemplo, dado um array [1; 2; 3; 4; 5] após a aplicação da função teríamos esse array preenchido com os 
seguintes valores [1; 3; 6; 10; 15]. Para esta tarefa utilize um array auxiliar.
*/

/*
Aqui é definido uma constante "LISTA_TAMANHO" com valor 7, 
que é o tamanho da lista que será utilizado no programa.
*/
#define LISTA_TAMANHO 7

/*
Aqui é definido a função printALista, que recebe uma lista como parâmetro e imprime para o usuário.
*/

void printALista(int lista[]) {
    printf("Lista: ");
    for (int i = 0; i < LISTA_TAMANHO; i++) {
        printf("%d (%d) ", lista[i], i);
    }
    printf("\n");
}

/*
 Aqui é definido a função "ProcureValor", que recebe uma lista e um valor inteiro como parâmetros e busca o valor 
 na lista. Caso encontre o valor, retorna a posição em que ele se encontra na lista. Caso contrário, retorna -1.
*/

int procureValor(int lista[], int valor) {
    for (int i = 0; i < LISTA_TAMANHO; i++) {
        if (lista[i] == valor) {
            return i;
        }
    }
    return -1;
}

/*
 Aqui é definido uma função "modificarLista", que recebe uma lista como parâmetro e o modifica seguindo 
 o que foi pedido na questão. A função cria uma lista auxiliar para armazenar os valores intermediários, 
 calcula a soma dos valores anteriores e o próprio valor para cada elemento da lista original e armazena 
 na lista auxiliar na mesma posição, e depois copia os valores da lista auxiliar de volta para a lista original.
*/

void modificarLista(int lista[]) {
    // Cria uma lista auxiliar para armazenar os valores intermediários.
    int auxLista[LISTA_TAMANHO];
    // O primeiro elemento da lista auxiliar é igual ao primeiro elemento da lista original.
    auxLista[0] = lista[0];
    /* 
    Para cada elemento da lista original, calcula a soma dos valores anteriores e o próprio valor
    e armazena no lista auxiliar na mesma posição.
    */
    for (int i = 1; i < LISTA_TAMANHO; i++) {
        auxLista[i] = auxLista[i - 1] + lista[i];
    }
    // Copia os valores da lista auxiliar de volta para a lista original.
    for (int i = 0; i < LISTA_TAMANHO; i++) {
        lista[i] = auxLista[i];
    }
}

int main() {
    // Cria uma lista para armazenar os valores digitados pelo usuário.
    int lista[LISTA_TAMANHO];
    // Pede ao usuário que digite os valores e os armazene na lista.
    printf("Digite %d valores inteiros:\n", LISTA_TAMANHO);
    for (int i = 0; i < LISTA_TAMANHO; i++) {
        scanf("%d", &lista[i]);
    }

    // Imprime a lista com as posições de armazenamento de cada valor.
    printALista(lista);

    // Pede ao usuário que digite um valor para procurar na lista e chama a função "procureValor" para fazer a busca.
    int procureValorEntrada;
    printf("Digite um valor inteiro para procurar na lista: ");
    scanf("%d", &procureValorEntrada);
    int procureResultado = procureValor(lista, procureValorEntrada);
    // Imprime o resultado da busca.
    if (procureResultado == -1) {
        printf("%d não está presente na lista\n", procureValorEntrada);
    } else {
        printf("%d está presente na lista na posição %d\n", procureValorEntrada, procureResultado);
    }

    // Chama a função "modificarLista" para modificar a lista seguindo o que foi pedido na questão.
    modificarLista(lista);

    // Imprime a lista modificada.
    printALista(lista);

    return 0;
}