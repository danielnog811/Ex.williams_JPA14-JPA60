# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-46: Contar de 1 a 10         *");
	printf("\n*********************************************\n\n");

//Variáveis
	int contador;

//Leitura e Escrita
	printf("Contagem de 1 até 10 utilizando do...while\n\n");

	contador = 1;

//Processamento e Resultados
	do{

		printf("%d\n", contador);
		contador++;

	}while(contador <= 10);

	return 0;
}
