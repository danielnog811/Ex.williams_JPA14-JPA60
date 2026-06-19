# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n************************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826                *");
	printf("\n* Programa JPA-59 . O Assistente de Direção (GPS Sem Mapa) *");
	printf("\n************************************************************\n\n");

//Variáveis
	char direcao;

//Leitura e Escrita
	printf("Informe uma direção (N, S, L ou O): ");
	scanf(" %c", &direcao);

//Processamento e Resultados
	switch(direcao){

		case 'N':
			printf("\nSeguir para o Norte.\n");
			break;

		case 'S':
			printf("\nSeguir para o Sul.\n");
			break;

		case 'L':
			printf("\nVirar à Leste (Direita).\n");
			break;

		case 'O':
			printf("\nVirar à Oeste (Esquerda).\n");
			break;

		default:
			printf("\nComando inválido! Pare o robô.\n");
	}

	return 0;
}