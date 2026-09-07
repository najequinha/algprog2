#include <stdio.h>


int main() {
	int l, c;

	scanf("%d %d", &l, &c);

	int mA[l][c], mB[l][c], somas[l][c], soma;

	for (int i = 0; i < l; i ++) {
		for (int j = 0; j < c; j ++) {
			scanf("%d", &mA[i][j]);
		}
	}

	for (int i = 0; i < l; i ++) {
		for (int j = 0; j < c; j ++) {
			scanf("%d", &mB[i][j]);
		}
	}

	for (int i = 0; i < l; i ++) {
		for (int j = 0; j < c; j ++) {
			soma = mA[i][j] + mB[i][j];
			somas[i][j] = soma;
		}
	}

	for (int i = 0; i < l; i ++) {
		for (int j = 0; j < c; j ++) {
			printf("%d", somas[i][j]);
		}
	}

	printf("\n");






	return 0;
}