#include "armstrong_numbers.h"

// Verifica numero de digitos
int numero_de_digitos(int num) {
    
    int numCopia = num, contDigs = 0;
    while (numCopia > 0 ){
        numCopia = numCopia / 10;
        contDigs++;
    }
    return contDigs;
}

// Checa se é um número de Armstrong
bool is_armstrong_number(int candidate) {
    
    int numCopia, aux, qntDig = 0, soma = 0;

    qntDig = numero_de_digitos(candidate);
    numCopia = candidate;
    
    while (numCopia > 0 ){
        aux = numCopia % 10;
        numCopia = numCopia / 10;
        soma = soma + pow(aux, qntDig);
    }
    return soma == candidate;
}