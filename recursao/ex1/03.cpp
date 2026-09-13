#include <stdio.h>

void impressao(int N) {
	if (N == 1) {
		printf("1");
	}

	else {
		impressao(N-1);
		printf(" %d", N);
	}
}

int main() {
	int n;

	scanf("%d", &n);

	impressao(n);

	return 0;
}