#include<stdio.h>

int n1 = 100;
int n2 = 200;
//int n3 = 200;
//static int n3 = 300;
int n4 = 200;

void add(void) {
	int result = n1 + n2;
	printf("result : %d \n", result);
}

void sub(void) {
	int result = n1 - n2;
	printf("result : %d \n", result);
}

void staticprt(void) {
	printf("%d \n", n4);
}

int func(int x) {
	int result = 2 * x + 1;
	return result;
}