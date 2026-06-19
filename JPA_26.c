# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-26 - Contar de 1 a 10        *");
	printf("\n*********************************************\n\n");

//Variáveis
	int contador;

//Leitura e Escrita
	printf("Contagem de 1 até 10\n\n");

	for(contador = 1; contador <= 10; contador++){
		printf("%d\n", contador);
	}

	return 0;
}