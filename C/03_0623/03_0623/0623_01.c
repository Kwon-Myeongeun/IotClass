//�Է��Լ�
//scanf_s("�Է¹��� ���� ���Ĺ���",&�Է¹��� ���� ������ ������, ������ ũ��)
//& -> 1. �ּ� 2. ��Ʈ���� 3.������(&&)

#include<stdio.h>

//int main(void) {
//
//	int n1 = 0, n2 = 0, value = 0, rest = 0;
//	printf("ù��° ���� �Է� : >>"); scanf_s("%d", &n1, sizeof(n1));
//	printf("�ι�° ���� �Է� : >>"); scanf_s("%d", &n2, sizeof(n2));
//
//	value = n1 / n2; //��
//	rest = n1 % n2; //������
//	printf("�� : %d, ������ : %d \n", value, rest);
//
//}

int main(void) {

	int n1, n2, result = 0;
	double x = 0.0;
	char a = 0;

	printf("1. ���� �Է�>>"); scanf_s("%d", &n1);
	printf("2. ���� �Է�>>"); scanf_s("%d", &n2);
	printf("3. �Ǽ� �Է�>>"); scanf_s("%lf", &x);
	//rewind(stdin);
	printf("4. �Ǽ� �Է�>>"); scanf_s("%c", &a, sizeof(a));
	result = n1 + n2;		printf("n1 + n2 : %d \n", result);
	result = n1 - n2;		printf("n1 - n2 : %d \n", result);
	result = n1 * n2;		printf("n1 * n2 : %d \n", result);
	result = n1 / n2;		printf("n1 / n2 : %d \n", result);
	printf("%.1lf, %c \n", x, a);


	return 0;
}