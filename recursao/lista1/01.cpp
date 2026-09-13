#include <stdio.h>


int f2 (int n)
{
	if (n == 0)
		return 1;

	else if (n == 1)
		return 1;

	else
		return f2(n-1)+ 2 * f2(n-2);
}

int main(){

	int i;

	scanf("%d", &i);

	i = f2(i);

	printf("%d\n", i);



return 0;
 
}