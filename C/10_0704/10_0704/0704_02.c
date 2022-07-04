/*
-함수 사용(함수명 --> 주소, 함수 포인터)
1. 함수 정의, 설계(함수명은 변수명 사용하듯이 사용한다.)
	가) void add(void);
	나) void add(int, int);
			

2.함수 구현
*/

#include<stdio.h>
#include "global.h" //헤더파일을 선언하면 -> 자동적으로 관련 파일
extern int n3;

int main(void) {
	add();
	sub();
	printf("%d \n", n3);
	printf("%d \n", ++n3);
	int result = func(30);
	printf("%d \n", result);
	return 0;
}