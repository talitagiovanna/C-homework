#include <stdio.h>
#include <string.h>

/*
199. Faça um programa que inverta a ordem das letras de uma string. Utilize o código do exercício 115 
para incrementar o código de César adicionando a inversão da mensagem encriptada.
*/

#define MAX 100

/*
Nesta função é feita a inversão da ordem dos caracteres de uma string. Então, a função usa um laço "for" para
percorrer apenas metade da string, trocando a posição do primeiro caractere pelo último, a posição do segundo
caractere pelo penúltimo e assim por diante. Ela percorre a metade da string porque se houver uma quantidade 
ímpar de caracteres, o caracter central não vai precisar ser invertido por ele mesmo e permanece no lugar.
*/
void inverteString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// Função que aplica o código de César em uma string.
void criptografaCesar(char *str, int chave) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + ((str[i] - 'a' + chave) % 26);
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + ((str[i] - 'A' + chave) % 26);
        }
    }
}

int main() {
    char mensagem[MAX];
    int chave;

    printf("Digite uma mensagem: ");
    fgets(mensagem, MAX, stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0'; // Remove o caractere de nova linha no final da string.

    printf("Digite a chave de criptografia: ");
    scanf("%d", &chave);

    criptografaCesar(mensagem, chave);
    inverteString(mensagem);
    printf("Mensagem encriptada: %s\n", mensagem);

    inverteString(mensagem);
    criptografaCesar(mensagem, 26 - chave); // Descriptografa com a chave oposta.
    printf("Mensagem descriptografada: %s\n", mensagem);

    return 0;
}