#include<stdio.h>
//배열 -> 1차원, 2차원, 3차원

/*
1. 배열 선언
자료형 배열명[길이] = {값1, 값2, ...};
자료형 배열명[길이] = {0,};
값 : 정수, 0.0 = 실수, ''=문자, " "=문자열

2. 배열 크기 : sizeof(배열명)
	배열의 길이 : sizeof(배열명)/izeof(자료형)

3.배열 사용
	배열명[index] <--- 값
	&배열명[index] <--- 주소

4. index -> 0부터 출발함.
5. 배열은 포인터이고, 포인터는 배열이다.
*/
int main(void) {
	int ar[] = { 3,5,14,9,7 };
	int length = sizeof(ar) / sizeof(int);
	printf("%d \n", length);
	for(int i = 0; i < length; i++)
		printf("1. %d ", ar[i]);
	printf("\n");
	for (int i = 0; i < length; i++)
		ar[i] = 5 - i;
	for(int i =0; i<length; i++)
		printf("2. %d ", ar[i]);
	printf("\n %p\n", ar);
	printf("\n %p\n", &ar[0]);
	printf("\n %p\n", &ar[2]);
	printf("\n %p\n", ar+2);
	printf("\n %d, %d\n", *(ar+2), ar[2]);
	printf("\n %d, %d\n", *ar, ar[0]);
	printf("\n %d, %d\n", *(ar + 4), ar[4]);


	
}