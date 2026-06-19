# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*************************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826                 *");
	printf("\n* Programa JPA-28 - Soma dos 100 Primeiros Números Naturais *");
	printf("\n*************************************************************\n\n");

//Variáveis
	int contador, soma = 0;

//Leitura e Escrita
	printf("Mostrando a soma de 1 até 100\n\n");

//Processamento e Resultados
	for(contador = 1; contador <= 100; contador++){
		soma += contador;
		printf("%d + %d = %d\n", contador, (contador - 1), soma);
	}
	
	printf("\nResultado final: %d\n", soma);

	return 0;
}