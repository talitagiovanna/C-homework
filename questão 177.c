#include <stdio.h>
#include <math.h>

#define GAME_TICK 0.5 // define um intervalo de tempo entre os cálculos da posição.

// função que calcula a posição do projétil.
int jumpPosition(double v0, double theta, double t, double* x, double* y);

int main() {
    // declaração das variáveis.
    double v0, theta, t = 0.0, x, y;
    // solicita ao usuário a velocidade inicial do projétil.
    printf("Digite a velocidade inicial (m/s): ");
    scanf("%lf", &v0);
    // solicita ao usuário o ângulo de lançamento do projétil.
    printf("Digite o angulo (em graus): ");
    scanf("%lf", &theta);
    theta = theta * M_PI / 180.0; // converte o ângulo para radianos.
    printf("t | x | y\n"); // imprime um cabeçalho da tabela.
    // enquanto a função jumpPosition retornar 1 (ou seja, enquanto o projétil não atingir o solo).
    while (jumpPosition(v0, theta, t, &x, &y)) {
        // imprime o tempo atual, a posição horizontal e vertical do projétil.
        printf("%.2f | %.2f | %.2f\n", t, x, y);
        t += GAME_TICK; // atualiza o tempo com o intervalo definido.
    }
    printf("%.2f | %.2f | %.2f\n", t, x, y); // Imprime a última posição do projétil.
    return 0;
}

// função que calcula a posição do projétil
int jumpPosition(double v0, double theta, double t, double* x, double* y) {
    double v0x = v0 * cos(theta); // calcula a velocidade horizontal.
    double v0y = v0 * sin(theta); // calcula a velocidade vertical.
    *x = v0x * t; // calcula a posição horizontal.
    *y = (v0y * t) - (0.5 * 9.8 * t * t); // calcula a posição vertical.
    if (t > 4.0) { // aqui foi adicionado um if para parar o processo, senão iria ficar rodando o programa infinitamente.
        return 0;
    }
    return 1; // retorna 1 para indicar que o projétil ainda está no ar.
}
