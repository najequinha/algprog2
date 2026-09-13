#include <stdio.h>

int func(int n) {
	if (n == 1) {
		return 1;
	}

	else {
		return (n - 1) * func(n-1);
	}
}

int main() {
	int n;

	scanf("%d", &n);

	int res = func(n);

	printf("%d\n", res);

	return 0;
}