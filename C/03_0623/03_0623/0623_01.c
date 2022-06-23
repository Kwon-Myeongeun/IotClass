//입력함수
//scanf_s("입력받을 값의 서식문자",&입력받은 값을 저장할 변수명, 변수의 크기)
//& -> 1. 주소 2. 비트연산 3.논리연산(&&)

#include<stdio.h>

//int main(void) {
//
//	int n1 = 0, n2 = 0, value = 0, rest = 0;
//	printf("첫번째 정수 입력 : >>"); scanf_s("%d", &n1, sizeof(n1));
//	printf("두번째 정수 입력 : >>"); scanf_s("%d", &n2, sizeof(n2));
//
//	value = n1 / n2; //몫
//	rest = n1 % n2; //나머지
//	printf("몫 : %d, 나머지 : %d \n", value, rest);
//
//}

int main(void) {

	int n1, n2, result = 0;
	double x = 0.0;
	char a = 0;

	printf("1. 정수 입력>>"); scanf_s("%d", &n1);
	printf("2. 정수 입력>>"); scanf_s("%d", &n2);
	printf("3. 실수 입력>>"); scanf_s("%lf", &x);
	//rewind(stdin);
	printf("4. 실수 입력>>"); scanf_s("%c", &a, sizeof(a));
	result = n1 + n2;		printf("n1 + n2 : %d \n", result);
	result = n1 - n2;		printf("n1 - n2 : %d \n", result);
	result = n1 * n2;		printf("n1 * n2 : %d \n", result);
	result = n1 / n2;		printf("n1 / n2 : %d \n", result);
	printf("%.1lf, %c \n", x, a);


	return 0;
}