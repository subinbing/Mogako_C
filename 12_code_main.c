#include <stdio.h>

void big(int n[], int size) {
	int bbig = 0;

	for (int i = 1; i <= 10; i++) {
		if (bbig < n[i])
			bbig = n[i];
	}
	printf("�ִ밪 : %d", bbig);
}

int main() {
	int n[10] = { 0, };

	for (int i = 1; i <= 10; i++)
		scanf_s("%d", &n[i]);
	big(n, sizeof(n), sizeof(int));
	
	return 0;
}