#include <stdio.h>


int piso_log2(int n) {
	int log = 0;

	while (n >= 2) {
		n = n / 2;

		log ++;
	}

	return log;

}


int main() {
	int n;

	scanf("%d", &n);

	int res = piso_log2(n);

	printf("%d\n", res);


	return 0;
}