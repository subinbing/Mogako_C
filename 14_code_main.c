#include <stdio.h>

int fibo(int n) {
	if (n == 0) 
		return 0;
	else if (n == 1) 
		return 1;
	else 
		return fibo(n - 2) + fibo(n - 1);
	
}
int main() {
	int n, fiboo;

	scanf_s("%d", &n);

	fiboo = fibo(n);
	printf("%d", fiboo);

	return 0;
}