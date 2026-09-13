#include <stdio.h>

int main() {
	int v, *p, q;

	v = 90;

	printf("%d\n", v);

	p = &v;

	*p = 78;

	printf("%d\n", v);

	q = 67;

	p = &q;

	printf("%d\n", *p);


	return 0;
}