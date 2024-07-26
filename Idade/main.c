#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int idade = 0;
	int ano = 0;
	float peso = 0.0;
	
	printf("Digite uma idade:\n");
	scanf("%d", &idade);
	
	printf("Digite o ano do calendario:\n");
	scanf("%d", &ano);
	
	printf("Digite um peso:\n");
	scanf("%f", &peso);
	
	printf("Idade informada: %d.\n", idade);
	printf("Estamos no ano de: %d.\n", ano);
	printf("O peso informado e de: %f.\n", peso);
	
	return 0;
}
