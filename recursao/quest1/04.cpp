#include <stdio.h>

int ciclo(int n) {
	if (n == 1) {
		return 1;
	}

	else if (n % 2 == 0) {
		printf("%d ", n/2);

		return 1 + ciclo(n/2);
	}

	else {
		printf("%d ", n*3+1);

		return 1 + ciclo(n*3+1);
	}


}


int main() {
	int n;

	scanf("%d", &n);

	printf("%d ", n);

	int res = ciclo(n);

	printf("%d", res);

	return 0;
}