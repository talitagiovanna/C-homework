#include <stdio.h>
/*
144. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada 
e retorne o maior valor na primeira variável e o menor valor na segunda variável. 
Escreva o conteúdo das 2 variáveis na tela.
*/

/*
Aqui foi feita a declaração da função que recebe dois ponteiros para inteiros, o uso de ponteiros aqui faz-se necessário para 
que não se tenha um aumento no código e na complexidade dele, sendo uma forma mais eficiente e direta de fazer essa questão.
*/
void maior_menor(int *a, int *b) {
  int temp;
  if(*a < *b) { // Aqui é feita a verificação se o primeiro valor é menor do que o segundo.
    temp = *a;
    *a = *b; // Aqui é feita a troca dos valores de a e b, caso seja verdadeira. 
    *b = temp;
  }
}

int main() {
  int num1, num2;

  // Aqui é feita a leitura dos valores inseridos pelo usuário.
  printf("Digite dois números inteiros: ");
  scanf("%d %d", &num1, &num2);

  // Aqui é feito a chamada da função para ser feita a verificação dos valores menores e maiores e a troca deles.
  maior_menor(&num1, &num2);

  // Aqui é feita a impressão para o usuário verificar o resultado.
  printf("Maior valor: %d\n", num1);
  printf("Menor valor: %d\n", num2);

  return 0;
}