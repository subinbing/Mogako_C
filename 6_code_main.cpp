// �� ���� ���� ū �� (if��)
///*
#include <stdio.h>

int main(void) {
	int a, b, c;

	scanf_s("%d\n%d\n%d", &a, &b, &c);
	
	if (a > b && a > c)
		printf("���� ū ���� %d�Դϴ�.", a);
	else if (b > a && b > c)
		printf("���� ū ���� %d�Դϴ�.", b);
	else
		printf("���� ū ���� %d�Դϴ�.", c);

	return  0;
}
//*/

//���Ǳ� - if-else ��
/*
#include <stdio.h>

int main(void) {
	int n;

	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &n);

	if (n == 1)
		printf("�ݶ� ���õǾ����ϴ�.");
	else if (n == 2)
		printf("���̴ٰ� ���õǾ����ϴ�.");
	else if (n == 3)
		printf("���� �ԷµǾ����ϴ�.");
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");
}
*/

// ���Ǳ� - switch��
/*
#include <stdio.h>

int main(void) {
	int n;

	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &n);

	switch (n) {
	case 1:
		printf("�ݶ� ���õǾ����ϴ�.");
		break;
	case 2:
		printf("���̴ٰ� ���õǾ����ϴ�.");
		break;
	case 3:
		printf("���� �ԷµǾ����ϴ�.");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.");
		break;
	}
	return 0;
}
*/