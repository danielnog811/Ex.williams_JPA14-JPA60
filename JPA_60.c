# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n**********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826  *");
	printf("\n* Programa JPA-60. O Validador de Dias Úteis *");
	printf("\n**********************************************\n\n");

//Variáveis
	int dia;

//Leitura e Escrita
	printf("Validador de dias da semana\n");

	printf("\nInforme um número de 1 a 7: ");
	scanf("%d", &dia);

//Processamento e Resultados
	switch(dia){

		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("\nDia Útil. Acesso liberado para o trabalho.\n");
			break;

		case 1:
		case 7:
			printf("\nFim de Semana. Prédio fechado.\n");
			break;

		default:
			printf("\nNúmero de dia inválido.\n");
	}

	return 0;
}
