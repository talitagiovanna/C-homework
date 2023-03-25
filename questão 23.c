#include <stdio.h>

// 23. Fazer um programa para receber um número do usuário e decompô-lo em fatores primos.

int main() {
    int num = 0;
    int i, j;

    printf("Digite um número: ");
    scanf("%d", &num);

// Primeiramente, testamos se i é um fator do número "num" inserido pelo usuário.
    for(i = 2; i <= num; i++) {
        if(num % i == 0) {
            for (j = 2; j <= i; j++) {
                /*Segundamente, entramos num segundo for para verificar nesse primeiro if se o i 
                é um número primo. Se não for, ele não vai ser colocado como um fator primo e esse for
                vai ser interrompido através do uso de "break" para que ele verifique o próximo valor de i.
                */
                if (i % j == 0 && j != i) {
                    break;
                }
                /*
                Caso não entre no primeiro if, ele vai verificar o segundo if para imprimir na tela o i, já
                que ele é um número primo, sendo considerado um fator primo do número "num" disponibilizado
                pelo o usuário.
                */
                if (j == i) {
                    printf("%d", i);
                    /*
                    Com isso, dividimos num pelo fator primo encontrado "i" e colocamos o valor restante desta 
                    divisão em "num". E, posteriormente, diminuimos o valor de i para que ele seja testado 
                    novamente e verificado se "num" continua sendo divisível por ele.
                    */
                   num = num/i;
                   i--;
                }
            }
        }
    }
}