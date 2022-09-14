#include <stdio.h>

int factorial(int n) {
	int nn = 1;
	for (int i = 1; i <= n; i++)
		nn = nn * i;
	return nn;
}

int main(void) {
	int n;
	scanf_s("%d", &n);

	printf("%d ÆÑÅä¸®¾ó : %d", n, factorial(n));

	return 0;
}
