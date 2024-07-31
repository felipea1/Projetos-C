#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float m;
	
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado(a)!\n");
	} else {
		printf("Reprovado(a)!\n");
	}
	
	if(m >= 11.0) {
		printf("Erro! o usuario colocou uma nota maior do que 10.\n");
	}
	
	return 0;
}
