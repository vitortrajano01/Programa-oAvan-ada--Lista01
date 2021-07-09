// Disciplina  : [Programa��o Avan�ada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descri��o   : Lista 01 - Quest�o 02

//Se i e j s�o vari�veis inteiras e p e q ponteiros para int, quais das seguintes express�es de
//atribui��o s�o ilegais?

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
	int i=10, j=12;
	int *p, *q;
	
	
	
	p = &i;   //<--- Atribui��o legal, retorna 
	*q = &j; 	//<--- Atribui��o ilegal.
	p = &*&i;
	i = (*&)j; //<--- Atribui��o ilegal.
	i = *&j;
	i = &&j;  //<--- Atribui��o ilegal.
	q = *p;	
	i = (*p) + *q; //<-- Atribui��o ilegal.
	
	printf("%d", i);
	
	return 0;
}


