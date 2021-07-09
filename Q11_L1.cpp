// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 11

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	
	//aloha[2] = value;
	scanf("%f", &aloha);
	//aloha = "value"; //<--- comando inválido.
	printf("%f", aloha);
	coisas[4][4] = aloha[3];
	//coisas[5] = aloha; //<--- comando inválido.
	//pf = value; //<--- comando inválido.
	pf = aloha;

	
}

