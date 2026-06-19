# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n******************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826          *");
	printf("\n* Programa JPA-17 - Sensor do Parque Temático       *");
	printf("\n******************************************************\n\n");

//Variáveis
	int h;

//Leitura e Escrita
	printf("Sensor de Segurança da Montanha-Russa\n");
	printf("\nInforme a altura da criança (em centímetros): ");
	scanf("%d", &h);

//Processamento e Resultados
	if(h >= 140){
		printf("\nResultado: Luz Verde! Entrada LIBERADA.");
	}else{
		printf("\nResultado: Luz Vermelha! Entrada BARRADA.");
	}

	return 0;
}