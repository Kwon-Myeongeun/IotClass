#include<stdio.h>
int main(void) {
	int data = 50;
	if (data > 30) {
		printf("data값이 큽니다. \n");
		printf("%d \n", data);
	}
	printf("반복문 종료! \n");
	printf("================== \n");

	int score = 92;
	char grade;
	if (score >= 90) {
		grade = 'A';
		printf("%d --> %c \n", score, grade);
	}
	printf("작업종료 \n");
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
	if (data > 3) printf("data가 더 큽니다. \n");
	else printf("data가 더 작습니다.");
	printf("작업종료 \n");
	printf("================== \n");
	
	int value;
	printf("점수 입력 : >>"); scanf_s("%d", &value);
	int point = (value >= 10000) ? value * 0.1 : value * 0.5;
	printf("%d \n", point);
	printf("================== \n");
	data = 10;

	printf("%d \n", (data > 5)? 1:0);

	return 0;
}