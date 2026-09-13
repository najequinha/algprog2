#include <stdio.h>

int inverte(int N, int V[]) {
	if (N == 1) {
		return V[N];
	}

	else {

		
		V[N] = inverte(N-1, V);
	}
}


int main() {

	int n;

	scanf("%d", &n);

	int v[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	for (int i = 0; i < n; i ++) {
		printf("%d \n", v[i]);
	}

	int v_[inverte(n, v)];

	for (int i = 0; i < n; i ++) {
		printf("%d ", v_[i]);
	}


	return 0;
}