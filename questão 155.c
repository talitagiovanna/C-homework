#include <stdio.h>

/*
155. Considere a seguinte declaração: int A, *B, **C, ***D; 
Escreva um programa que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo 
desse valor utilizando apenas os ponteiros B, C e D. 
O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quádruplo.
*/

int main() {
    int A, *B, **C, ***D; // Aqui foi feita a declaração das variáveis A, B, C e D.
    printf("Digite um valor para A: ");
    scanf("%d", &A); // Aqui foi feita a leitura do valor de A.

    B = &A; // Aqui foi feita a atribuição do endereço de A ao ponteiro B.
    C = &B; // Aqui foi feita a atribuição do endereço de B ao ponteiro C.
    D = &C; // Aqui foi feita a atribuição do endereço de C ao ponteiro D.

    // Aqui foi feita a exibição do dobro, triplo e quádruplo de A utilizando os ponteiros B, C e D.
    printf("O dobro de A é: %d\n", (*B) * 2); // Aqui o operador * é usado para acessar o valor apontado pelo ponteiro B.
    printf("O triplo de A é: %d\n", (**C) * 3); // Aqui o operador ** é usado para acessar o valor apontado pelo ponteiro C.
    printf("O quádruplo de A é: %d\n", (***D) * 4); // Aqui o operador *** é usado para acessar o valor apontado pelo ponteiro D.

    return 0;
}