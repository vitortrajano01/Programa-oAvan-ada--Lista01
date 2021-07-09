// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 10

//Se X for declarado como char os valores de x+1, x+2 e x+3  serão 4093, 4094 e 4095.
//Se X for declarado como int os valores de x+1, x+2 e x+3 serão 4094, 4096, 4098.
//Se X for declarado como float os valores de x+1, x+2 e x+3 serão 4096, 40100, 40104.
//Se X for declarado como double os valores de x+1, x+2 e x+3 serão 40100, 40108, 40116.

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
	int i, x1[4];
	char x2[4];
	float x3[4];
	double x4[4];
	
	for(i=1; i<4; i++){
		printf("%i ", x1+i);	
	}
	printf("\n ");
		for(i=1; i<4; i++){
		printf("%c ", x2+i);	
	}
	printf("\n ");
		for(i=1; i<4; i++){
		printf("%f ", x3+i);	
	}
	printf("\n ");
		for(i=1; i<4; i++){
		printf("%d ", x+i);	
	}
	
	return 0;
}
