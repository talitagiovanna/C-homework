#include <stdio.h>

/*
12. Suponha que você está programando um módulo contador de cédulas para caixas eletrônicos. 
Escreva um programa que informa com quantas cédulas de Real podemos representar um dado valor. 
Exemplo de resposta: R$ 218 = 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1. 
Procure minimizar o número de cédulas usadas. Desconsidere valores com centavos, e suponha que a
máquina sempre tem disponíveis as cédulas necessárias.
*/

#include <stdio.h>

int main() {
    int valor = 0;
    int cem = 0;
    int cinquenta = 0;
    int vinte = 0;
    int dez = 0;
    int cinco = 0;
    int dois = 0;
    int um = 0;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    /* verificar primeiramente se o valor é maior que as cédulas que estamos verificando, 
    pra poder ver quantas cédulas de cada uma irão ser dadas.
    E em cada if dar um novo valor utilizando-se do módulo (%) a variável "valor" 
    pra verificar a cédula seguinte e assim por diante. Como eu queria verificar todos as etapas,
    eu não poderia usar "elses ou else if".
    */
    if (valor >= 100) {
        cem = valor/100;
        valor = valor % 100;
    }
    if (valor >= 50) {
        cinquenta = valor/50;
        valor = valor % 50;
    }
    if (valor >= 20) {
        vinte = valor/20;
        valor = valor % 20;
    }
    if (valor >= 10) {
        dez = valor/10;
        valor = valor % 10;
    }
    if (valor >= 5) {
        cinco = valor/5;
        valor = valor % 5;
    }
    if (valor >= 2) {
        dois = valor/2;
        valor = valor % 2;
    }
    if (valor >= 1) {
        um = valor/1;
        valor = valor % 1;
    }

    printf("O resultado para a sua consulta é: %d cédula(s) de R$ 100, %d cédula(s) de R$ 50, %d cédula(s) de R$ 20, %d cédula(s) de R$ 10, %d cédula(s) de R$ 5, %d cédula(s) de R$ 2, %d cédula(s) de R$ 1.", cem, cinquenta, vinte, dez, cinco, dois, um);

    return 0;
}