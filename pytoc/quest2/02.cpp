#include <stdio.h>

int main() {
	int tamA, tamB, soma;

	soma = 0;

	scanf("%d", &tamA);

	int discA[tamA];

	for (int i = 0; i < tamA; i ++) {
		scanf("%d", &discA[i]);
	}

	scanf("%d", &tamB);

	int discB[tamB];

	for (int i = 0; i < tamB; i ++) {
		scanf("%d", &discB[i]);
	}

	for (int i = 0; i < tamA; i++) {
		for (int j = 0; j < tamB; j ++) {
			if (discA[i] == discB[j]) {
				soma++;
			}
		}
	}

	if (soma == 0) {
		printf("vazia");
		return 0;
	}

	int discAB[soma], pos;
	pos = 0;

	for (int i = 0; i < tamB; i++) {
		for (int j = 0; j < tamA; j ++) {
			if (discB[i] == discA[j]) {
				discAB[pos] = discB[i];
				pos++;
			}
		}
	}

	for (int i = 0; i < soma; i ++) {
		printf("%d ", discAB[i]);
	}



	return 0;
}