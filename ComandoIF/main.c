#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float m; // declarando que "m" ser� flutuante
	
	printf("Insira a nota:\n"); // imprimindo no prompt de comando e pedindo para o usuario inserir nota
	scanf("%f", &m); //guardando na mem�ria o valor que o usuario inserir / scanf precisa do &. 
	
	if(m >= 7.0){
		printf("Aprovado(a)!\n"); //imprime que o usuario foi aprovado caso ele insira um valor no "m" maior ou igual a 7
	} //if define um novo bloco de comandos portanto n�o precisa de ; 
	
	if (m <= 6.0) {
		printf("Reprovado(a)!\n");
	}
	return 0;
} 
