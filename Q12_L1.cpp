// Disciplina  : [Programação Avançada]
// Professor   : Agostinho
// Autor(a)    : Vitor da Silva Trajano
// Data atual  : 08/07/2021

// Descrição   : Lista 01 - Questão 12

//O uso de ponteiros para funções em C serve principalmente para definir, em tempo de execução, 
//qual função será executada, sem a necessidade de escrever o nome da função, de forma explícita naquele ponto do código.
//Em geral, a definição de qual função será executada é feita em um outro ponto do código, fazendo o ponteiro apontar para a função desejada.
//Ponteiros para funções podem ser passados como argumentos para outras funções, e a função apontada pode ser invocada a partir de seu ponteiro.

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
