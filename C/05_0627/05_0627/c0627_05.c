#include<stdio.h>

int main(void) {
	int data = 10;int y = 0;
	data++;
	printf("%d\n", data); //11
	data = 10;
	++data;
	printf("%d\n", data); //11
	data = 10;
	y = data++;
	printf("%d, %d\n", y, data); //10 11
	data = 10;
	y = ++data;
	printf("%d, %d\n", y, data); //11 11
	printf("=========================\n");
	data = 10;
	data--;
	printf("%d\n", data); //9
	data = 10;
	--data;
	printf("%d\n", data); //9
	data = 10;
	y=data--;
	printf("%d, %d\n", y, data); //10 9
	data = 10;
	y=--data;
	printf("%d, %d\n", y, data); //9 9
	printf("=========================\n");
	data = 10; printf("%d\n", data++); //10
	data = 10; printf("%d\n", ++data); //11
	data = 10; printf("%d\n", data--); //10
	data = 10; printf("%d\n", --data); //9

	return 0;
}