#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("Oi, tudo bem? Tenho 18 anos e programo.\n");
	
	printf("Valor inteiro: %d.\n", 10); //%d ser� substituido pelo o 10
	printf("Valor real: %f.\n", 3.14159265); //%f ser� substituido pelo o 3.14159265
	printf("Valor real com apenas duas casas: %.2f.\n", 3.14159265); //%.2f ser� substituido somente pela as primeiras duas casas
	printf("Dado de texto: %c.\n", 'a'); //%c ser� substituido pelo o caracterer 
	printf("Dado de texto: %s.\n","testando"); //%s ser� substituido pelo o testando
	system("pause");
	return 0;
}
