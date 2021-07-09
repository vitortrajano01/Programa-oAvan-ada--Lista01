// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 02

//Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de
//atribuição são ilegais?

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
	int i=10, j=12;
	int *p, *q;
	
	
	
	p = &i;   //<--- Atribuição legal, retorna 
	*q = &j; 	//<--- Atribuição ilegal.
	p = &*&i;
	i = (*&)j; //<--- Atribuição ilegal.
	i = *&j;
	i = &&j;  //<--- Atribuição ilegal.
	q = *p;	
	i = (*p) + *q; //<-- Atribuição ilegal.
	
	printf("%d", i);
	
	return 0;
}


