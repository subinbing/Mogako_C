#include <stdio.h>

void big(int *ptr) {
	int big_num = 0;

	for (int i = 1; i <= 10; i++) {
		if (big_num < *(ptr+i))
			big_num = *(ptr+i);
	}
	printf("가장 큰 값 : %d", big_num);
}

int main(void) {
	int arr[10] = { 0, };
	int* ptr = arr;
	
	for (int i = 1; i <= 10; i++) 
		scanf_s("%d", &arr[i]);
	
	big(ptr);
	
	return 0;
}


#include <stdio.h>

int main(void) {
	int arr[10] = { 0, };
	int* ptr = arr;
	int big_num = 0;

	for (int i = 1; i <= 10; i++)
		scanf_s("%d", &arr[i]);

	for (int i = 1; i <= 10; i++) {
		if (big_num < *(ptr + i))
			big_num = *(ptr + i);
	}
	printf("가장 큰 값 : %d", big_num);

	return 0;
}