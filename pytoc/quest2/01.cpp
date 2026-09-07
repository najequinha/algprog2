#include <stdio.h>

int main() {
	int tam, i, cresc;

	scanf("%d", &tam);

	int vetor[tam];

	for (i = 0; i < tam; i ++) {
		scanf("%d", &vetor[i]);
	}

	for (i = 0; i < tam - 1; i ++) {
		if (vetor[i] < vetor[i + 1]) {
			cresc = 1;
		}

		else {
			cresc = 0;
			break;
		}
	}

	if (cresc == 1) {
		printf("verdadeiro\n");
	}

	else printf("falso\n");



	return 0;
}