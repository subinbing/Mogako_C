#include <stdio.h>

int main(void) {
	int n = 0;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)
			printf("*");
		else
			printf("%d", i);
	}

	return 0;
}

