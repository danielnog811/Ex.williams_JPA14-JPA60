# include<stdio.h>
# include<stdlib.h>
# include<locale.h>
# include<string.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-18 - Login Simples           *");
	printf("\n*********************************************\n\n");

//Variáveis
	char usuario[20], senha[20];

//Leitura e Escrita
	printf("Sistema da Biblioteca Digital\n");
	printf("\nInforme o usuário: ");
	scanf("%s", usuario);

	printf("\nInforme a senha: ");
	scanf("%s", senha);

//Processamento e Resultados
	if(strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0){
		printf("\nResultado: Acesso PERMITIDO.");
	}else{
		printf("\nResultado: Acesso NEGADO.");
	}

	return 0;
}