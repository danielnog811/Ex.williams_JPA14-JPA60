# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-25 - Notas e Aprovação       *");
	printf("\n*********************************************\n\n");

//Variáveis
	float media;
	char resposta;

//Leitura e Escrita
	printf("Verificando a situação do aluno\n");

	do{
		printf("\nInforme a média final: ");
		scanf("%f", &media);

	//Processamento e Resultados
		if(media >= 7){
			printf("\nResultado: Aluno aprovado.\n");
		}else if(media >= 5){
			printf("\nResultado: Aluno em recuperação.\n");
		}else{
			printf("\nResultado: Aluno reprovado.\n");
		}

		printf("\nDeseja realizar outro teste? (S/N): ");
		scanf(" %c", &resposta);
		printf("\n");

	}while(resposta == 'S' || resposta == 's');

	return 0;
}