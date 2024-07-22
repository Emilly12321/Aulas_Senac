#include <stdio.h>
/* 
	Linguagens fracamente tipadas (js)
	Linguagens dinamicamente tipadas (php, python)
	Linguagens fortemente tipadas (c/c++, java, c#)
	
	tipos de dados
		int -> inteiro
		float -> decimal
		double -> decimal de dupla precisão
		char -> caractere | normalmente usado com aspas simples
		string -> conjunto de caracteres | aspas duplas
		boolean -> true ou false
*/
int main() {
	char valor1 = 'p';
	int valor2 = 1;
	int resultado = valor1 + valor2;
	float mesada = 300.9854125;
	printf("%d\n", resultado); // saida de dados no monitor
	printf("%c\n", valor1);
	printf("%f\n", mesada);
	printf("%.2f", mesada);
	// ESTRUTURA DE CONDIÇÃO
	if(valor1 > valor2){
		printf("\n\t\t SIM\n");
	}else{
		printf("\n\t\t NÃO\n");
	}
	
	//ESTRUTURA DE REPETIÇÃO
	for(int i = 0; i< 10; i++){
		printf("%d\t", i);
	}
	/**
		%d -> int
		%f -> float
		%c -> char
		%s -> string
		\n -> pula para a próxima linha
		\t -> faz uma tabulação
		
	**/
	return 0;
}


/**
	Debug ou Depurador
	é utilizado para parar a execução de um código
	para podermos ver o que tem dentro das variáveis.
*/

