
#include<stdio.h>

int main(void) {
	int a = 10; int b = 20; int c = 10;
	a += 10;	printf("%d\n", a);	//a=a+10;
	a -= 10;	printf("%d\n", a);	//a=a-10;
	a *= 10;	printf("%d\n", a);	//a=a*10;
	a /= 10;	printf("%d\n", a);	//a=a/10;
	a %= 10;	printf("%d\n", a);	//a=a%10;
	b <<= 10;	printf("%d\n", b);	//b=b<<3;
	b >>= 10;	printf("%d\n", b);	//b=b>>3;
	c |= 15;	printf("%d\n", c);	//c=c|15;

	return 0;
}