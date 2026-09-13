#include <stdio.h>

bool contem_par(int n, int V[]) {

	if (n == -1) {
		return false;
	}

	else if (V[n -1] % 2 == 0) {
		return true;
	}

	else {
		return contem_par(n-1, V);
	}

}


int main() {
	int n;

	scanf("%d", &n);

	int v[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	bool valor = contem_par(n, v);

	printf("%s\n", valor ? "true" : "false");


	return 0;
}