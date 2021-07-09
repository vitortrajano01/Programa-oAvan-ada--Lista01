// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 09

// A primeira função retorna os valores contidos no vetor vet, isto é, 4, 9 e 13.
// A segunda função retorna os endereços de memória de cada elemento do vetor vet.

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


