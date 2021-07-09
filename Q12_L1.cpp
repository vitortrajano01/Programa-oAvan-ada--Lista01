// Disciplina  : [Programa��o Avan�ada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descri��o   : Lista 01 - Quest�o 12

//O uso de ponteiros para fun��es em C serve principalmente para definir, em tempo de execu��o, 
//qual fun��o ser� executada, sem a necessidade de escrever o nome da fun��o, de forma expl�cita naquele ponto do c�digo.
//Em geral, a defini��o de qual fun��o ser� executada � feita em um outro ponto do c�digo, fazendo o ponteiro apontar para a fun��o desejada.
//Ponteiros para fun��es podem ser passados como argumentos para outras fun��es, e a fun��o apontada pode ser invocada a partir de seu ponteiro.

//Exemplo:

#include <stdio.h>
#include <stdlib.h>

void soma (int a, int b){
	printf("Soma = %d\n", a+b);	
}

void subtracao (int a, int b){
	printf("Subtracao = %d\n", a-b);	
}

void multiplicacao (int a, int b){
	printf("Multiplicacao = %d\n", a*b);	
}

int main (void){
	void (*pf_array[])(int, int) = {soma, subtracao, multiplicacao};
	int opcao, a, b;
	printf("Digite 0 para somar, 1 para subtrair e 2 para multiplicar: \n");
	scanf("%d", &opcao);
	printf("Digite o numero a: \n");
	scanf("%d", &a);
	printf("Digite o numero b: \n");
	scanf("%d", &b);
	(*pf_array[opcao])(a, b);
	
	return 0;
}
