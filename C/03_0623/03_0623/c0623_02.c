#include<stdio.h>

int main(void) {

	int age = 0;
	char name[20];
	double height, weight = 0.0;
	printf("나이 : >>"); scanf_s("%d", &age);
	printf("키 : >>"); scanf_s("%lf", &height);
	printf("몸무게 : >>"); scanf_s("%lf", &weight);
	rewind(stdin); //숫자 입력 다음에 문자 또는 문자열 입력시 작성함.
	printf("이름 : >>"); scanf_s("%s", name, sizeof(name));
	printf("제 나이는 %d살이고, 키는 %0.2lfcm이며, \n몸무게는 %0.2lfkg입니다. \n",
		age, height, weight);
	printf("이름은 %s입니다. -%d- \n", name, sizeof(name));

	return 0;
}