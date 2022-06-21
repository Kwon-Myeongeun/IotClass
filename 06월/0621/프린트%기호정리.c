#include <stdio.h>

int main(void) {
	
	int i = 100000;
	//양의 정수u
	printf("test u %u\n", i);
	//주소(10진수)
	printf("test u %p\n", i);
	//주소(16진수)
	printf("test u %#X\n", i);
	return 0;
}