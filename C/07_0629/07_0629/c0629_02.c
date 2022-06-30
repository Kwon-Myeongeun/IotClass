#include<stdio.h>

int main(void) {
	int a = 10; int b = 20; char c = 'A';
	int* pa = &a;
	int* pb = &b;
	char* pc;
	pc = &c;

	printf("1. %#x, %#x, %#X \n", &a, &b, &c );
	printf("2. %d,%d,%c\n", a, b, c);
	printf("3. %#x, %#x, %#X \n", pa, pb, pc );
	printf("4. %d,%d,%d\n", sizeof(pa), sizeof(pb), sizeof(pc));
	printf("5. %#x, %#x, %#X \n", *pa, *pb,* pc);
	*pa = 100;
	*pb = 200;
	*pc = 'B';

	printf("6. %#x, %#x, %#X \n", *pa, *pb, *pc);
	printf("7. %d,%d,%c\n", a, b, c);

	return 0;
}