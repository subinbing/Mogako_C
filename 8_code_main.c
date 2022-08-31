#include <stdio.h>

int main(void) {
	int score[5] = { 0, };
	int max = 0;

	for (int i = 1; i <= 5; i++) {
		scanf_s("%d", &score[i]);

		if (max < score[i]) 
			max = score[i];
	}
	printf("�ִ밪 : %d", max);

	return 0;
}