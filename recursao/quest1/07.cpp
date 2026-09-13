#include <stdio.h>

int v3(int n, int va[], int vb[]){
	int vc[n*2];
	if (n == 1) {
		vc[0] = va[0];
		vc[1] = vb[0];
		return vc[n*2];
	}

	else {
		vc[n*2] = vb[n];
		vc[n*2-1] = va[n];
		v3(n-1, va, vb);
	}


}

int main() {
	int n;

	scanf("%d", &n);

	int v1[n], v2[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &v1[i]);
	}


	for (int i = 0; i < n; i++) {
		scanf("%d", &v2[i]);
	}

	int vc[n*2] = v3(n, v1, v2);

	for (int i = 0; i < n; i++) {
		printf("%d", vc[i]);
	}




	return 0;
}