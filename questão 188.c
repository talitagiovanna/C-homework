#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define uma constante que representa o tamanho máximo do nome de usuário.
#define MAX_USERNAME_LENGTH 8

// Função para limpar o buffer de entrada do teclado.
void limpar_buffer() {
    int c;
    // Lê o buffer de entrada até encontrar uma quebra de linha ou o fim do arquivo.
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

// Função para ler um nome de usuário do teclado.
void ler_username(char *username) {
    int i = 0;
    char c;

    // Exibe a mensagem para o usuário digitar um nome de usuário.
    printf("Digite um nome de usuario (maximo de %d caracteres): ", MAX_USERNAME_LENGTH);

    // Lê um caractere por vez até o usuário digitar uma quebra de linha ou o tamanho máximo for atingido.
    while (i < MAX_USERNAME_LENGTH && (c = getchar()) != '\n' && c != EOF) {
        // Verifica se o caractere é alfanumérico
        if (isalnum(c)) {
            // Se for alfanumérico, adiciona o caractere no nome de usuário e exibe na tela.
            username[i++] = c;
            putchar(c);
        }
    }

    // Adiciona o caractere nulo no final do nome de usuário para indicar o fim da string.
    username[i] = '\0';

    // Limpa o buffer de entrada do teclado caso o usuário tenha digitado mais caracteres do que o máximo permitido.
    if (c != '\n' && c != EOF) {
        limpar_buffer();
    }

    // Exibe uma quebra de linha para separar a mensagem do próximo texto na tela.
    printf("\n");
}

// Função para ler uma senha do teclado.
void ler_senha(char *senha) {
    int i = 0;
    char c;

    // Exibe a mensagem para o usuário digitar uma senha.
    printf("Digite uma senha (maximo de %d caracteres): ", MAX_USERNAME_LENGTH);

    // Lê um caractere por vez até o usuário digitar uma quebra de linha ou o tamanho máximo for atingido.
    while (i < MAX_USERNAME_LENGTH && (c = getchar()) != '\n' && c != EOF) {
        // Verifica se o caractere é alfanumérico
        if (isalnum(c)) {
            // Se for alfanumérico, adiciona o caractere na senha e exibe um asterisco na tela.
            senha[i++] = c;
            putchar('*');
        }
    }

    // Adiciona o caractere nulo no final da senha para indicar o fim da string.
    senha[i] = '\0';

    // Limpa o buffer de entrada do teclado caso o usuário tenha digitado mais caracteres do que o máximo permitido.
    if (c != '\n' && c != EOF) {
        limpar_buffer();
    }

    // Exibe uma quebra de linha para separar a mensagem do próximo texto na tela.
    printf("\n");
}

int main() {
    char username[MAX_USERNAME_LENGTH + 1]; // Define uma lista de caracteres para armazenar o nome de usuário.
    char senha[MAX_USERNAME_LENGTH + 1]; // Define uma lista de caracteres para armazenar a senha.

    // Cadastra o nome de usuário e a senha.
    // senha do usuário.
    ler_username(username);
    ler_senha(senha);
    
    // Exibe uma quebra de linha para separar a mensagem do próximo texto na tela.
    printf("\n");
    
    // Recebe um novo nome de usuário e senha.
    char novo_username[MAX_USERNAME_LENGTH + 1];
    char nova_senha[MAX_USERNAME_LENGTH + 1];
    
    ler_username(novo_username);
    ler_senha(nova_senha);
    
    // Compara o nome de usuário e a senha cadastrados com o nome de usuário e a senha recebidos.
    if (strcmp(username, novo_username) == 0 && strcmp(senha, nova_senha) == 0) {
        // Se forem iguais, exibe a mensagem "OK".
        printf("OK\n");
    } else {
        // Se forem diferentes, exibe a mensagem "Acesso negado".
        printf("Acesso negado\n");
    }
    
    return 0;
}