# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-20 - Ano Bissexto            *");
	printf("\n*********************************************\n\n");

//Variáveis
	int ano;

//Leitura e Escrita
	printf("Verificando se um ano é bissexto\n");

	printf("\nInforme o ano: ");
	scanf("%d", &ano);

//Processamento e Resultados
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
		printf("\nResultado: O ano %d é bissexto.", ano);
	}else{
		printf("\nResultado: O ano %d não é bissexto.", ano);
	}

	return 0;
}