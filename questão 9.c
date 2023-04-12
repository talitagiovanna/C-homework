#include <stdio.h>

/*
9. Fazer um programa para solicitar ao usuário um número entre 0 e 99 e mostrar este número por extenso. 
Se o usuário introduzir um número que não está neste intervalo, mostre: "número inválido". 
(Fonte:http://www.bernhard.pro.br/disciplinas/java/ensino/java-L01.pdf)
*/

int main() {
    int numero;
    printf("Digite um numero entre 0 e 99: ");
    scanf("%d", &numero);

    switch(numero) {
        case 0: printf("Zero."); break;
        case 1: printf("Um."); break;
        case 2: printf("Dois."); break;
        case 3: printf("Três."); break;
        case 4: printf("Quatro."); break;
        case 5: printf("Cinco."); break;
        case 6: printf("Seis."); break;
        case 7: printf("Sete."); break;
        case 8: printf("Oito."); break;
        case 9: printf("Nove."); break;
        case 10: printf("Dez."); break;
        case 11: printf("Onze."); break;
        case 12: printf("Doze."); break;
        case 13: printf("Treze."); break;
        case 14: printf("Quatorze."); break;
        case 15: printf("Quinze."); break;
        case 16: printf("Dezesseis."); break;
        case 17: printf("Dezessete."); break;
        case 18: printf("Dezoito."); break;
        case 19: printf("Dezenove."); break;
        case 20: printf("Vinte."); break;
        case 21: printf("Vinte um."); break;
        case 22: printf("Vinte e dois."); break;
        case 23: printf("Vinte e três."); break;
        case 24: printf("Vinte e quatro."); break;
        case 25: printf("Vinte e cinco."); break;
        case 26: printf("Vinte e seis."); break;
        case 27: printf("Vinte e sete."); break;
        case 28: printf("Vinte e oito."); break;
        case 29: printf("Vinte e nove."); break;
        case 30: printf("Trinta."); break;
        case 31: printf("Trinta e um."); break;
        case 32: printf("Trinta e dois."); break;
        case 33: printf("Trinta e três."); break;
        case 34: printf("Trinta e quatro."); break;
        case 35: printf("Trinta e cinco."); break;
        case 36: printf("Trinta e seis."); break;
        case 37: printf("Trinta e sete."); break;
        case 38: printf("Trinta e oito."); break;
        case 39: printf("Trinta e nove."); break;
        case 40: printf("Quarenta."); break;
        case 41: printf("Quarenta e um."); break;
        case 42: printf("Quarenta e dois."); break;
        case 43: printf("Quarenta e três."); break;
        case 44: printf("Quarenta e quatro."); break;
        case 45: printf("Quarenta e cinco."); break;
        case 46: printf("Quarenta e seis."); break;
        case 47: printf("Quarenta e sete."); break;
        case 48: printf("Quarenta e oito."); break;
        case 49: printf("Quarenta e nove."); break;
        case 50: printf("Cinquenta."); break;
        case 51: printf("Cinquenta e um."); break;
        case 52: printf("Cinquenta e dois."); break;
        case 53: printf("Cinquenta e três."); break;
        case 54: printf("Cinquenta e quatro."); break;
        case 55: printf("Cinquenta e cinco."); break;
        case 56: printf("Cinquenta e seis."); break;
        case 57: printf("Cinquenta e sete."); break;
        case 58: printf("Cinquenta e oito."); break;
        case 59: printf("Cinquenta e nove."); break;
        case 60: printf("Sessenta."); break;
        case 61: printf("Sessenta e um."); break;
        case 62: printf("Sessenta e dois."); break;
        case 63: printf("Sessenta e três."); break;
        case 64: printf("Sessenta e quatro."); break;
        case 65: printf("Sessenta e cinco."); break;
        case 66: printf("Sessenta e seis."); break;
        case 67: printf("Sessenta e sete."); break;
        case 68: printf("Sessenta e oito."); break;
        case 69: printf("Sessenta e nove."); break;
        case 70: printf("Setenta."); break;
        case 71: printf("Setenta e um."); break;
        case 72: printf("Setenta e dois."); break;
        case 73: printf("Setenta e três."); break;
        case 74: printf("Setenta e quatro."); break;
        case 75: printf("Setenta e cinco."); break;
        case 76: printf("Setenta e seis."); break;
        case 77: printf("Setenta e sete."); break;
        case 78: printf("Setenta e oito."); break;
        case 79: printf("Setenta e nove."); break;
        case 80: printf("Oitenta."); break;
        case 81: printf("Oitenta e um."); break;
        case 82: printf("Oitenta e dois."); break;
        case 83: printf("Oitenta e três."); break;
        case 84: printf("Oitenta e quatro."); break;
        case 85: printf("Oitenta e cinco."); break;
        case 86: printf("Oitenta e seis."); break;
        case 87: printf("Oitenta e sete."); break;
        case 88: printf("Oitenta e oito."); break;
        case 89: printf("Oitenta e nove."); break;
        case 90: printf("Noventa."); break;
        case 91: printf("Noventa e um."); break;
        case 92: printf("Noventa e dois."); break;
        case 93: printf("Noventa e três."); break;
        case 94: printf("Noventa e quatro."); break;
        case 95: printf("Noventa e cinco."); break;
        case 96: printf("Noventa e seis."); break;
        case 97: printf("Noventa e sete."); break;
        case 98: printf("Noventa e oito."); break;
        case 99: printf("Noventa e nove."); break;
        default: printf("Numero inválido!"); break;
    }

    printf("\n");
    return 0;
}