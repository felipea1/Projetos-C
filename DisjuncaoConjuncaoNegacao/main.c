#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float m; // m será flutuante 
	
	printf("Insira a nota:\n"); //pedimos para que o usuário insira a nota
	scanf("%f", &m); //guardando a nota na memória com scanf 
	
	if(m >= 4.0 && m < 7.0){ // duas expressões relacionais sendo conectadas por um operador lógico &&
		printf("Tem direito a exame!\n");
	}
	
	if(m <= 3.0) {
		printf("Reprovado(a)!\n");
	}
	
	if(m >= 8.0 && m <= 10) {
		printf("Aprovado(a)!\n"); 
	}
	
	if (m >= 11){
		printf("Erro! colocou um numero maior do que 10.\n");
	}
	
	return 0;
}
