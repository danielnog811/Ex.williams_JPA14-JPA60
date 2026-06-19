# include<stdio.h>
# include<stdlib.h>
# include<locale.h>

int main (){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "pt_BR.UTF-8");

	printf("\n***********************************************************");
	printf("\n* Aluno: DANIEL NOGUEIRA LOPES - RA 0027826               *");
	printf("\n* Programa JPA-58 . A Calculadora de Bolso de 4 Operações *");
	printf("\n***********************************************************\n\n");

//Variáveis
	float numero1, numero2, resultado;
	char operador;

//Leitura e Escrita
	printf("Calculadora de 4 operações\n");

	printf("\nInforme o primeiro número: ");
	scanf("%f", &numero1);

	printf("Informe o segundo número: ");
	scanf("%f", &numero2);

	printf("Informe a operação (+, -, * ou /): ");
	scanf(" %c", &operador);

//Processamento e Resultados
	switch(operador){

		case '+':
			resultado = numero1 + numero2;
			printf("\nResultado: %.2f\n", resultado);
			break;

		case '-':
			resultado = numero1 - numero2;
			printf("\nResultado: %.2f\n", resultado);
			break;

		case '*':
			resultado = numero1 * numero2;
			printf("\nResultado: %.2f\n", resultado);
			break;

		case '/':
			if(numero2 != 0){
				resultado = numero1 / numero2;
				printf("\nResultado: %.2f\n", resultado);
			}else{
				printf("\nErro: divisão por zero não permitida.\n");
			}
			break;

		default:
			printf("\nOperação matemática não reconhecida.\n");
	}

	return 0;
}
