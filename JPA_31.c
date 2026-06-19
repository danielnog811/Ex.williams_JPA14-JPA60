# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-31: Contagem regressiva      *");
	printf("\n*********************************************\n\n");

//Variáveis
	int contador;

//Leitura e Escrita
	printf("Contagem regressiva da competição escolar\n\n");

//Processamento e Resultados
	for(contador = 10; contador >= 1; contador--){
		printf("%d\n", contador);
	}

	return 0;
}