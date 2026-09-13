#include <stdio.h> 

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

	n = soma(n);

	printf("%d\n", n);

	return 0;
}