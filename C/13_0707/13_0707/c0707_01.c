#include<stdio.h>

int main(void) {
	char* str1 = 0;
	char str2[100];
	scanf_s("%s", str2, sizeof(str2));

	printf("%s \n", str2);

	return 0;

}