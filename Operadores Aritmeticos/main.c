#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int A, B, soma, subtr, mult, divis, dado = 10;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B; //Tudo que está a esquerda recebe o valor que está a direita "Atribuição"
	subtr = A - B;
	mult = A * B;
	divis = A / B; 
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", subtr);
	printf("Multiplicacao: %d.\n", mult);
	printf("Divisao: %d.\n", divis);
	
	printf("---------MEXENDO COM O DADO---------\n");
	
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento: %d.\n", dado);
	
	dado += 3;
	printf("Depois do incremento em 3 unidades: %d.\n", dado);
	
	dado -= 2;
	printf("Depois do decremento em 2 unidades: %d.\n", dado);
	
	dado *= 10;
	printf("Depois de multiplicar por 10: %d.\n", dado);
	
	return 0;
}
