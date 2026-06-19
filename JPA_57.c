#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n******************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826          *");
	printf("\n* Programa JPA-57. A Central do Brinquedo Eletrônico *");
	printf("\n******************************************************\n\n");

//Variáveis
	char cor[20];

//Leitura e Escrita
	printf("Para que não haja erro, digite as cores da seguinte maneira: Verde, Amarelo ou Verde\n\n");
	printf("Informe a cor que acendeu no brinquedo: ");
	scanf("%s", cor);

//Processamento e Resultados
	if(strcmp(cor, "Verde") == 0){

		printf("\nO urso diz: Vamos brincar lá fora!\n");

	}else if(strcmp(cor, "Amarelo") == 0){

		printf("\nO urso diz: Estou ficando com soninho...\n");

	}else if(strcmp(cor, "Vermelho") == 0){

		printf("\nO urso diz: Estou com fome, hora do lanche!\n");

	}else{

		printf("\nCor desconhecida.\n");

	}

	return 0;
}
