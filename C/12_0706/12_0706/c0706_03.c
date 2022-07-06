#include<stdio.h>
int main(void) {
	char a = 127; //OK
	char b = 128; //X
	char c = -128; //OK
	char d = -129; //X
	unsigned char x = 255;
	unsigned char y = 256;
	unsigned char z = 300;

	printf("%d, %d, %d, %d \n", a, b, c, d);
	printf("%d, %d, %d\n", x,y,z);

	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	return 0;
}