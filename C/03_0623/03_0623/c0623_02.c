#include<stdio.h>

int main(void) {

	int age = 0;
	char name[20];
	double height, weight = 0.0;
	printf("���� : >>"); scanf_s("%d", &age);
	printf("Ű : >>"); scanf_s("%lf", &height);
	printf("������ : >>"); scanf_s("%lf", &weight);
	rewind(stdin); //���� �Է� ������ ���� �Ǵ� ���ڿ� �Է½� �ۼ���.
	printf("�̸� : >>"); scanf_s("%s", name, sizeof(name));
	printf("�� ���̴� %d���̰�, Ű�� %0.2lfcm�̸�, \n�����Դ� %0.2lfkg�Դϴ�. \n",
		age, height, weight);
	printf("�̸��� %s�Դϴ�. -%d- \n", name, sizeof(name));

	return 0;
}