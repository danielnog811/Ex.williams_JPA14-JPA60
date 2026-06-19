# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-49: Pedir senha até acertar  *");
	printf("\n*********************************************\n\n");

//Variáveis
	int senha;

//Leitura e Escrita
	printf("Sistema de acesso ao laboratório\n");

	senha = 0;

//Processamento e Resultados
	do{

		printf("\nDigite a senha: ");
		scanf("%d", &senha);

		if(senha != 1111){
			printf("\nSenha incorreta! Tente novamente.\n");
		}

	}while(senha != 1111);

	printf("\nAcesso liberado!\n");

	return 0;
}
