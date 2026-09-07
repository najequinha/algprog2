#include <stdio.h>

int main() {
	int m, n, soma;

	scanf("%d %d", &m, &n);

	int matriz[m][n], vetor[n], res[m];

	for (int i = 0; i < m; i ++) {
		for (int j = 0; j < n; j ++) {
			scanf("%d", &matriz[i][j]);
		}
	}


	for (int i = 0; i < m; i ++) {
		scanf("%d", &vetor[i]);
	}

	for (int i = 0; i < m; i ++) {
		soma = 0;
		for (int j = 0; j < n; j ++) {
			soma += vetor[j] * matriz[i][j];
		}
		res[i] = soma;
	}

	for (int i = 0; i < m; i ++) {
		printf("%d ", res[i]);
	}




	return 0;
}