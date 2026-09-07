#include <stdio.h>

int main() {
	int tam, valor;

	scanf("%d", &tam);

	int vetor[tam];

	for (int i = 0; i < tam; i++) {
		scanf("%d", &vetor[i]);
	}

	valor = 1;

	for (int i = 1; i < tam; i++){
		if (vetor[0] > vetor[i]) {
			valor = 1;
		}

		else {
			valor = 0;
			break;
		}
	}

	if (valor == 1) {
		printf("true");
	} 

	else {
		printf("false");
	}

	return 0;
}