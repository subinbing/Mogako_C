// 세 수중 가장 큰 수 (if문)
///*
#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf_s("%d\n%d\n%d", &a, &b, &c);
	
	if (a > b && a > c)
		printf("가장 큰 수는 %d입니다.", a);
	else if (b > a && b > c)
		printf("가장 큰 수는 %d입니다.", b);
	else
		printf("가장 큰 수는 %d입니다.", c);

	return  0;
}
//*/

//자판기 - if-else 문
/*
#include <stdio.h>

int main(void) {
	int n;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &n);

	if (n == 1)
		printf("콜라가 선택되었습니다.");
	else if (n == 2)
		printf("사이다가 선택되었습니다.");
	else if (n == 3)
		printf("물이 입력되었습니다.");
	else
		printf("잘못 입력하셨습니다.");
}
*/

// 자판기 - switch문
/*
#include <stdio.h>

int main(void) {
	int n;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("콜라가 선택되었습니다.");
		break;
	case 2:
		printf("사이다가 선택되었습니다.");
		break;
	case 3:
		printf("물이 입력되었습니다.");
		break;
	default:
		printf("잘못 입력하셨습니다.");
		break;
	}
	return 0;
}
*/