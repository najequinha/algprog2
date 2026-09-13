#include <stdio.h>

int contadig(int N) {

	int soma = 0;

	if (N < 10)
		return soma + 1;

	else {
		soma = contadig(N/10);
		return soma + 1;
	}
}

int soma(int N) {

	if (N == 1) {
		return 1;
	}

	else {
		return N + soma(N - 1);
	}
}

int main() {
	int n;

	scanf("%d", &n);

	int dig = contadig(n);

	int nsoma = soma(n);

	printf("%d\n%d\n", dig, nsoma);

	return 0; 
}