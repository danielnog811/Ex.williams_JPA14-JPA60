# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n***************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826       *");
	printf("\n* Programa JPA-32: Quadrado dos números de 1 a 10 *");
	printf("\n***************************************************\n\n");

//Variáveis
	int numero;

//Leitura e Escrita
	printf("Quadrado dos números de 1 até 10\n\n");

//Processamento e Resultados
	for(numero = 1; numero <= 10; numero++){
		printf("%d² = %d\n", numero, numero * numero);
	}

	return 0;
}