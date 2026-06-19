# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n******************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826          *");
	printf("\n* Programa JPA-39: Verificar se um número é positivo *");
	printf("\n******************************************************\n\n");

//Variáveis
	float numero;

//Leitura e Escrita
	printf("Verificando se um número é positivo\n\n");

	numero = 0;

//Processamento e Resultados
	while(numero <= 0){

		printf("Informe um número positivo: ");
		scanf("%f", &numero);

		if(numero <= 0){
			printf("\nValor inválido! Digite um número positivo.\n\n");
		}
	}

	printf("\nResultado: Número positivo cadastrado com sucesso.\n");

	return 0;
}