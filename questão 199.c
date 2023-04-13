#include <stdio.h>
#include <string.h>

/*
199. Faça um programa que inverta a ordem das letras de uma string. Utilize o código do exercício 115 
para incrementar o código de César adicionando a inversão da mensagem encriptada.
-------------------------------------------------- x --------------------------------------------------
>>>>> 115. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
Escreva ao final a matriz obtida. <<<<<
*/
int main() {
  char mensagem[100]; // declara a string para armazenar a mensagem.
  int chave, escolha; // declara as variáveis para armazenar a chave e escolha do usuário.
  
  // solicita ao usuário que digite a mensagem a ser criptografada e armazena na variável 'mensagem'.
  printf("Digite a mensagem a ser criptografada: ");
  fgets(mensagem, 100, stdin);
  mensagem[strcspn(mensagem, "\n")] = 0; // Remove o caractere de nova linha no final.
  
  // solicita ao usuário que digite a chave de criptografia e armazena na variável 'chave'.
  printf("Digite a chave de criptografia: ");
  scanf("%d", &chave);
  
  // solicita ao usuário que escolha a opção de criptografar ou descriptografar a mensagem.
  printf("Escolha uma opção:\n1 - Criptografar\n2 - Descriptografar\n");
  scanf("%d", &escolha);
  
  if (escolha == 1) {
    // Criptografa a mensagem.
    for (int i = 0; i < strlen(mensagem); i++) {
      if (mensagem[i] >= 'a' && mensagem[i] <= 'z') { // Verifica se o caractere é uma letra minúscula.
        mensagem[i] = 'a' + (mensagem[i] - 'a' + chave) % 26; // Aplica o código de César na letra.
      } else if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') { // Verifica se o caractere é uma letra maiúscula.
        mensagem[i] = 'A' + (mensagem[i] - 'A' + chave) % 26; // Aplica o código de César na letra.
      }
    }
    printf("Mensagem criptografada: %s\n", mensagem); // Imprime a mensagem criptografada na tela.
  } else if (escolha == 2) {
    // Descriptografa a mensagem.
    for (int i = 0; i < strlen(mensagem); i++) {
      if (mensagem[i] >= 'a' && mensagem[i] <= 'z') { // Verifica se o caractere é uma letra minúscula.
        mensagem[i] = 'a' + (mensagem[i] - 'a' - chave) % 26; // Aplica o código de César inverso na letra.
      } else if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') { // Verifica se o caractere é uma letra maiúscula.
        mensagem[i] = 'A' + (mensagem[i] - 'A' - chave) % 26; // Aplica o código de César inverso na letra.
      }
    }
    // Inverte a mensagem descriptografada.
    char mensagem_invertida[100]; // declara uma nova string para armazenar a mensagem invertida.
    for (int i = 0; i < strlen(mensagem); i++) {
      mensagem_invertida[i] = mensagem[strlen(mensagem) - 1 - i]; // Inverte a ordem das letras.
    }
    mensagem_invertida[strlen(mensagem)] = '\0'; // Adiciona o caractere nulo no final da nova string para indicar o término da string.