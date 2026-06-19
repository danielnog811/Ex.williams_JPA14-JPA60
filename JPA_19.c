# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-19 - Ordem Crescente         *");
	printf("\n*********************************************\n\n");

//Variáveis
	float n1, n2, n3, aux;

//Leitura e Escrita
	printf("Organizando três números em ordem crescente\n");

	printf("\nInforme o primeiro número: ");
	scanf("%f", &n1);

	printf("\nInforme o segundo número: ");
	scanf("%f", &n2);

	printf("\nInforme o terceiro número: ");
	scanf("%f", &n3);

//Processamento
	if(n1 > n2){
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

	if(n1 > n3){
		aux = n1;
		n1 = n3;
		n3 = aux;
	}

	if(n2 > n3){
		aux = n2;
		n2 = n3;
		n3 = aux;
	}

//Resultados
	printf("\nResultado: %.2f - %.2f - %.2f", n1, n2, n3);

	return 0;
}