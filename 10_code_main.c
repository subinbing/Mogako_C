#include <stdio.h>

int main(void) {
	int a[5] = { 0, };
	int* ptr = a;

	for (int i = 1; i <= 5; i++)
		scanf_s("%d", &a[i]);
	for (int i = 5; i >= 1; i--)
		printf("%d\n", *(ptr + i));

	return 0;
}