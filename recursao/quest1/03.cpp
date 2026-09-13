#include <stdio.h>

int potencia(int x, int n) {
	if (n == 0) {
		return 1;
	}

	else if (n % 2 == 0) {
		return potencia(x, n/2*2);
	}

	else{
		return potencia(x*x, n-1);
	}
}


int main() {
	int x, n;

	scanf("%d %d", &x, &n);

	int pot = potencia(x, n);

	printf("%d\n", pot);


	return 0;
}