#include <stdio.h>

/*
1. Fazer um programa para:
(a) receber do usuário um tempo em segundos, correspondente à duração de um
evento qualquer (por ex. jogo de futebol);
(b) calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos.
*/

int main() {

    int segundos = 0;
    int horas = 0;
    int minutos = 0;
    int segundos_restantes = 0;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    /*Como 1 hora é 3600 segundos, eu dividi os segundos dados por 3600 pra saber a quantidade de horas.
    Depois disso, calculei o restante dos segundos que não entraram nas horas calculando o módulo de segundos, 
    para depois ir calcular os minutos. 
    Como 1 minuto é 60 segundos, eu dividi os segundos restantes por 60 pra saber a quantidade de minutos. 
    Depois disso, calculei o resto dos segundos que não entraram nos minutos, utilizando do módulo de novo. 
    */
    horas = segundos/3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes/60;
    segundos_restantes = segundos_restantes % 60;

    printf("%d segundos são equivalentes a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segundos_restantes);

    return 0;
}