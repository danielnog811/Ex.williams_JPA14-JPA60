# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-38: Senha correta            *");
	printf("\n*********************************************\n\n");

//Variáveis
	int senha;

//Leitura e Escrita
	printf("Sistema de acesso\n\n");

	senha = 0;

//Processamento e Resultados
	while(senha != 1234){

		printf("Digite a senha: ");
		scanf("%d", &senha);

		if(senha != 1234){
			printf("\nSenha incorreta! Tente novamente.\n\n");
		}
	}

	printf("\nResultado: Acesso permitido.\n");

	return 0;
}