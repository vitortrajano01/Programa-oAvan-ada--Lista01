// Disciplina  : [Programa��o Avan�ada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descri��o   : Lista 01 - Quest�o 11

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
	//aloha = "value"; //<--- comando inv�lido.
	printf("%f", aloha);
	coisas[4][4] = aloha[3];
	//coisas[5] = aloha; //<--- comando inv�lido.
	//pf = value; //<--- comando inv�lido.
	pf = aloha;

	
}

