#include <stdio.h>

void inverte(int V[], int inicio, int fim) {
	if (inicio >= fim) {
		return;
	}

	else {
		int aux = V[inicio];
		V[inicio] = V[fim];
		V[fim] = V[aux];

		
		inverte(V, inicio+1, fim-1);
	}
}


int main() {

	int n;

	scanf("%d", &n);

	int v[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	inverte(v, 0, n-1);

	for (int i = 0; i < n; i ++) {
		printf("%d ", v[i]);
	}




	return 0;
}