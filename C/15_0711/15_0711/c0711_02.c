#include<stdio.h>
int main(void) {
	int data = 50;
	if (data > 30) {
		printf("data���� Ů�ϴ�. \n");
		printf("%d \n", data);
	}
	printf("�ݺ��� ����! \n");
	printf("================== \n");

	int score = 92;
	char grade;
	if (score >= 90) {
		grade = 'A';
		printf("%d --> %c \n", score, grade);
	}
	printf("�۾����� \n");
	printf("================== \n");
	int res = 0;
	if (data == 3) {
		data++;
		res = data;
	}

	printf("%d, %d \n", res, data);
	printf("================== \n");
	if (data == 10) data = 0;
	if (data != 10) data++;

	if (data == 10) data = 0;
	else data++;
	printf("================== \n");
	data = 5;
	if (data > 3) printf("data�� �� Ů�ϴ�. \n");
	else printf("data�� �� �۽��ϴ�.");
	printf("�۾����� \n");
	printf("================== \n");
	
	int value;
	printf("���� �Է� : >>"); scanf_s("%d", &value);
	int point = (value >= 10000) ? value * 0.1 : value * 0.5;
	printf("%d \n", point);
	printf("================== \n");
	data = 10;

	printf("%d \n", (data > 5)? 1:0);

	return 0;
}