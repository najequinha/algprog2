#include <stdio.h>
#include <math.h>


int maxfator(int numero) {
	int mfator;
	for (int i = 1; i < numero; i ++){
		if (numero % i == 0) {
			mfator = i;
		}
	}
	return mfator;
}

int main() {

	int n;

	scanf("%d", &n);
	
	int fatorm = maxfator(abs(n));

	printf("%d %d\n", n, fatorm);



	return 0;
}