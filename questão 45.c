#include <stdio.h>

/*
Implementar a função inverte que recebe um número unsigned int como parâmetro 
e retorna este número escrito ao contrário. Ex: 431 <-> 134.
*/

unsigned int inverte(unsigned int n) {
    unsigned int resultado = 0;

    /*
    Aqui foi criada a função "inverte", essa função vai receber como parâmetro um número inteiro 
    sem sinal "unsigned int", onde pode armazenar apenas números positivos ou zero.
    Com isto, é declarado uma váriavel "resultado" como zero, onde irá armazenar o resultado da inversão.
    O laço "while" vai ser utilizado para fazer essa inversão. 
    */

    while (n > 0) {
        resultado = resultado * 10 + n % 10;
        n /= 10;
    }

    return resultado;
}

/*
Aqui é solicitado ao usuário a inserção de um número para fazer a inversão deste número. 
Em seguida, a função inverte é chamada passando o número digitado como argumento, 
e o resultado é impresso na tela.
*/
int main() {
    unsigned int num;

    printf("Digite um número: ");
    scanf("%u", &num);

    printf("O número invertido é: %u\n", inverte(num));

    return 0;
}