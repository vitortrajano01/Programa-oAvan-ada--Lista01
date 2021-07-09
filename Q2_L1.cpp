// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 02

//Os valores de: 
//p == &i;
//*p - *q;
//**&p;
//3 - *p/(*q) + 7;
//são respectivamente: O endereço de memória da variável i, -2, 3 e 10.
//O programa abaixo mostra essa questão.


// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int i=3,j=5, a, b, c;
	int *p, *q;
	p = &i;
	q = &j;

	p == &i;
	printf("\n %d ", p);
	//printf("\n %d ", q);
	
	a = *p - *q;
	
	b = **&p;
	c = 3 - *p/(*q) + 7;
	
	
	printf("\n %d ", a);
	printf("\n %d ", b);
	printf("\n %d ", c);
    return 0;
}

