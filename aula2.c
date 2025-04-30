#include <stdio.h>

int main() {
	
	int estoque;

	printf("Qual o tamanho do estoque? ");
	scanf("%d", &estoque);

	if (estoque < 10){
		printf("\n estoque está baixo \n");
	} else {
		printf("o estoque está bem abastecido ;) \n");
	}

	return 0;
}
