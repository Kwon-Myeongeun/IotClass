/*
-�Լ� ���(�Լ��� --> �ּ�, �Լ� ������)
1. �Լ� ����, ����(�Լ����� ������ ����ϵ��� ����Ѵ�.)
	��) void add(void);
	��) void add(int, int);
			

2.�Լ� ����
*/

#include<stdio.h>
#include "global.h" //��������� �����ϸ� -> �ڵ������� ���� ����
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