# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n****************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826        *");
	printf("\n* Programa JPA-51: Contagem regressiva de 10 até 1 *");
	printf("\n****************************************************\n\n");

//Variáveis
	int contador;

//Leitura e Escrita
	printf("Contagem regressiva de 10 até 1 utilizando do...while\n\n");

	contador = 10;

//Processamento e Resultados
	do{

		printf("%d\n", contador);
		contador--;

	}while(contador >= 1);

	return 0;
}
