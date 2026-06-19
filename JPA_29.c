# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n*********************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826 *");
	printf("\n* Programa JPA-29: Números pares de 0 a 50  *");
	printf("\n*********************************************\n\n");

//Variáveis
	int contador;

//Leitura e Escrita
	printf("Exibindo números pares de 0 até 50\n\n");

//Processamento e Resultados
	for(contador = 0; contador <= 50; contador++){
		if(contador % 2 == 0){
			printf("%d\n", contador);
		}
	}

	return 0;
}