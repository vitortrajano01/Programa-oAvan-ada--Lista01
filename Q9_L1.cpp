// Disciplina  : [Programa��o Avan�ada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descri��o   : Lista 01 - Quest�o 09

// A primeira fun��o retorna os valores contidos no vetor vet, isto �, 4, 9 e 13.
// A segunda fun��o retorna os endere�os de mem�ria de cada elemento do vetor vet.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	
  	int vet[] = {4,9,13};
  	int i;
  	for(i=0;i<3;i++){
  		
  	printf("%d ",*(vet+i));
  }
  
  	for(i=0;i<3;i++){
  		
  	printf("%X ", vet+i);
  }
  
  return 0;
}


