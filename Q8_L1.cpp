// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 08

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
	
	int mat[4], *p, x;
	p = mat + 1; // é valido, aponta para o endereço de memória do segundo elemento do vetor mat[4].
	p = mat; // é valido, aponta para o endereço de memória do primeiro elemento do vetor mat[4].
	p = mat; // é valido, aponta para o endereço de memória do primeiro elemento do vetor mat[4].
	x = (*mat); // não é valido pois x não é um ponteiro.
	
	printf("%i", x);
}


