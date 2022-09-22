#include <stdio.h>

void re(int num[], int size) {
	for (int i = 0; i < size / 2; i++) {
		int temp = num[i];
		num[i] = num[size - i - 1];
		num[size - i - 1] = temp;
	}
}

int main(void) {
	int num[10] = { 0, };

	for (int i = 0; i < 10; i++) 
		scanf_s("%d", &num[i]);

	re(num, 10);

	for (int i = 0; i < 10; i++) 
		printf("%d\n", num[i]);
	
	return 0;
}

