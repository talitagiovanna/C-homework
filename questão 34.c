#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
34. Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao
usuário qual é o "número mágico". O programa deverá indicar se a tentativa efetuada
pelo usuário é maior ou menor que o número mágico e contar o número de tentativas.
Quando o usuário conseguir acertar o número o programa deverá classificar o usuário
como:
a. De 1 a 3 tentativas: muito sortudo
b. De 4 a 6 tentativas: sortudo
c. De 7 a 10 tentativas: normal
d. > 10 tentativas: tente novamente
*/

int main () {
    int numero_magico = 0;
    int tentativa = 0;
    int chute = 0;
    int num_tentativas = 0;

    /*
    Aqui faz-se o uso da srand para que cada vez que formos rodar este código gere um número diferente,
    pois ao apenas usarmos a rand teremos sempre o mesmo número saindo como o numero_magico.
    */
    srand(time(NULL)); 
    /*
    Aqui se coloca o módulo de "501" de rand para que eu possa sortear aleatoriamente números entre 0 e 500.
    */
    numero_magico = rand() % 501; 
    /*
    no meu  laço de repetição, utilizei o "do while" para que pudesse fazer a inserção do número pelo o 
    usuário e a verificação se o número fornecido é maior ou menor que o número mágico sorteado aleatoriamente.
    */
    do {
        printf("Tente adivinhar qual é o número mágico entre 0 e 500: ");
        scanf("%d", &chute);
        num_tentativas++;

        if (chute < numero_magico) {
            printf("Tente adivinhar novamente! O número mágico é maior!\n");
        } else if (chute > numero_magico) {
            printf("Tente adivinhar novamente! O número mágico é menor!\n");
        }
    } while (chute != numero_magico);
    
    // Aqui é a área de retorno ao usuário de acordo com as tentativas de acerto ao número mágico.
    printf("Parabéns! Você acertou o número mágico em %d tentativas! ", num_tentativas);

    if (num_tentativas <= 3) {
        printf("Você é muito sortudo!");
    } else if (num_tentativas <= 6) {
        printf("Você é sortudo!");
    } else if (num_tentativas <= 10) {
        printf("Você é normal!");
    }
    else {
        printf("Tente novamente!");
    }
    
    return 0;
}