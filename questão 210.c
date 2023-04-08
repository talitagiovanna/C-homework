#include <stdio.h> 

/*
210. Escreva uma função que recebe 3 float's e retorna uma struct que tem 3 campos do tipo float: 
menor, maior e meio. A função deve analisar os valores e preencher a struct.
                MaMeMe classifica (float n1, float n2, float n3);
*/

/*
Aqui é definido uma struct com três campos do tipo float: menor, maior e meio.
*/ 
typedef struct {
    float menor;
    float maior;
    float meio;
} MaMeMe;

// Aqui é definido uma função chamada classifica que recebe três floats e retorna uma struct MaMeMe.
MaMeMe classifica(float n1, float n2, float n3) {
    MaMeMe resultado; // Aqui é declarado uma variável do tipo MaMeMe para armazenar o resultado.

    // Aqui é onde irá ser encontrado o menor número.
    resultado.menor = n1; // Inicializa o campo "menor" com o valor de n1.
    if (n2 < resultado.menor) { // Verifica se n2 é menor que resultado.menor.
        resultado.menor = n2; // Se sim, atualiza o valor de resultado.menor para n2.
    }
    if (n3 < resultado.menor) { // Verifica se n3 é menor que resultado.menor.
        resultado.menor = n3; // Se sim, atualiza o valor de resultado.menor para n3.
    }

    // Aqui é onde irá ser encontrado o maior número.
    resultado.maior = n1; // Inicializa o campo "maior" com o valor de n1.
    if (n2 > resultado.maior) { // Verifica se n2 é maior que resultado.maior.
        resultado.maior = n2; // Se sim, atualiza o valor de resultado.maior para n2.
    }
    if (n3 > resultado.maior) { // Verifica se n3 é maior que resultado.maior.
        resultado.maior = n3; // Se sim, atualiza o valor de resultado.maior para n3.
    }

    // // Aqui é onde irá ser encontrado o número do meio.
    if (n1 != resultado.menor && n1 != resultado.maior) { // Verifica se n1 não é igual ao menor ou maior número.
        resultado.meio = n1; // Se sim, n1 é o número do meio.
    } else if (n2 != resultado.menor && n2 != resultado.maior) { // Senão, verifica se n2 não é igual ao menor ou maior número.
        resultado.meio = n2; // Se sim, n2 é o número do meio.
    } else { // Senão, o número do meio só pode ser n3.
        resultado.meio = n3;
    }

    return resultado; // Aqui é onde retorna a struct com os valores encontrados.
}

int main() {
    /*
    Aqui é onde foi declarado as variáveis para armazenar os números digitados pelo usuário.
    */
    float a, b, c; 
    printf("Digite três números: ");
    scanf("%f %f %f", &a, &b, &c); 

    // Aqui é onde é chamado a função classifica com os números digitados e armazena o resultado em uma variável.

    MaMeMe resultado = classifica(a, b, c); 

    // Aqui é onde tem-se um resultado impresso para o usuário.

    printf("Menor: %.2f\n", resultado.menor);
    printf("Maior: %.2f\n", resultado.maior);
    printf("Meio: %.2f\n", resultado.meio);

    return 0; /
}