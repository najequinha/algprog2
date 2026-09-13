#include <stdio.h>
int pot(int x, int n) {

	if (n == 0) {
		return 1;
	}

	else if (n == 1) {
		return x;
	}

	else {
		int base = x;		
		while (n > 1) {
			x *= base;
			n -=1;
		}		
		return x;

	}
	
}

int potR(int x, int n) {

	if (n == 0) {
		return 1;
	}

	else if (n == 1) {
		return x;
	}

	else {
		return x * potR(x, n-1);

	}
	
}

int main() {


	int x, n, nr, r;

	scanf("%d %d", &x, &n);

	nr = pot(x, n);

	r = potR(x, n);

	printf("%d %d\n", nr, r);




	return 0;
}