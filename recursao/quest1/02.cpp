#include <stdio.h>

int piso_log2(int n) {
	if (n/2 == 1) {
		return 1;
	}

	else {
		return 1 + piso_log2(n/2);
	}
}

int main() {
	int n;

	scanf("%d", &n);

	int piso = piso_log2(n);

	printf("%d\n", piso);

	return 0;
}