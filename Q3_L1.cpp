// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 03

// Se i ocupa o endereço 4094 na memória, o programará retornará respectivamente: 4094, 7, 15, 9.

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
  int i=5, *p;
  p = &i;
  
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    return 0;
}

//Se i ocupar o endereço 4094 na memória, será 
//impresso os valores 4094, 7, 5, 15 e 9 respectivamente.
