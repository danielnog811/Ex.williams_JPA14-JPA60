# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-24 - Pode Votar?             *");
	printf("\n*********************************************\n\n");

//Variáveis
	int idade;
	char resposta;

//Leitura e Escrita
	printf("Verificando se a pessoa pode votar\n");

	do{
		printf("\nInforme sua idade: ");
		scanf("%d", &idade);

//Processamento e Resultados
		if(idade >= 16){
			printf("\nResultado: Você pode votar.\n");
		}else{
			printf("\nResultado: Você não pode votar.\n");
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}