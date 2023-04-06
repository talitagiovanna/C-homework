#include <stdio.h>

/*
56. Escreva uma função recursiva que calcule a soma dos dígitos de um número inteiro. 
Por exemplo, se a entrada for 123, a saída deverá ser 1+2+3 = 6
*/
int somaDigitos(int n) {

    /*
    É criada uma função recursiva "somaDigitos" que recebe um múmero inteiro "n" como parâmetro 
    e retorna a soma dos seus digítos. Primeiramente, a função irá verificar se o número "n" é 0, o caso base. 
    Se for, ela vai retornar 0, pois não há digítos a serem somados. Caso contrário, ela entra no segundo caso,  
    onde a função retorna o resto da divisão de "n por 10", que é o último dígito do número, 
    somado à soma dos dígitos dos demais algarismos do número, 
    que é obtida chamando-se a própria função "somaDigitos" recursivamente 
    com o resultado da divisão inteira de n por 10. Essa função faz isso até que não haja mais digítos.
    */

    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + somaDigitos(n / 10);
    }
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("A soma dos dígitos é: %d\n", somaDigitos(num));

    return 0;
}