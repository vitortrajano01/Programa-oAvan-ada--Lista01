// Disciplina  : [Programa��o Avan�ada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descri��o   : Lista 01 - Quest�o 08

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
	
	int mat[4], *p, x;
	p = mat + 1; // � valido, aponta para o endere�o de mem�ria do segundo elemento do vetor mat[4].
	p = mat; // � valido, aponta para o endere�o de mem�ria do primeiro elemento do vetor mat[4].
	p = mat; // � valido, aponta para o endere�o de mem�ria do primeiro elemento do vetor mat[4].
	x = (*mat); // n�o � valido pois x n�o � um ponteiro.
	
	printf("%i", x);
}


