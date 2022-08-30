#include <stdio.h>

int main(void) {
	int n = 0;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)
			printf("*");
		else
			printf("%d", i);
	}

	return 0;
}

