#include<stdio.h>
#include"sum.h"
int main(void) {
	//문자, 문자열, 정수, 실수
	//문자 : char, (int), (signed)char : -128 ~ 127 : -> 0~127(아스키코드)
	//						    unsiged char : 0~255 : 임베디드에서 사용
	//			unsigned char = 0xAA; --> 1010 1010
	//문자열 : string --> char *a = "korea";
	//                           char a[100] = "korea";
	//정수형 : int i = 100; 정수의 기본 크기 --> int : 4 바이트(마이크로프로세서 : 2b)
	//            long j = 100; <-- 태생 4바이트
	//            short <-- 2byte, 임베디드 코팅할 때 많이 사용, 센서
	//                                    센서 : 8비트 -> 10bit용 센서 사용함.
	//                                           : 32비트용 -> 12bit용 센서 사용함.
	//실수형 : float --> 4byte
	//            double --> 8byte, double y = 3.14; 실수의 기본 크기 : 8byte

	char a = 'A';
	char b = 65;
	printf("%c, %d, %d, %c \n", a, b, a + 1, b + 1);
	char* a1 = "korea";
	char b1[10] = "Ansan";
	printf("%s, %s \n", a1, b1);
	int a2 = 1234;
	long b2 = 4567;
	printf("%d, %d, %u, %#X \n", a2, b2, a2 + 1000, b2 + 1000);
	unsigned short a3 = 65535;
	unsigned short b3 = 65536;
	unsigned short c3 = 65537;
	printf("%d, %d, %d \n", a3, b3, c3);
	float x = 3.1415925555;
	double y = 3.1415925555;
	printf("%f, %lf \n", x, y);
	printf(" % .10f, % .10f \n", x, y);

	int test1 = 200; int test2 = 300;
	int result = sum(test1, test2);
	print("%d", result);

	return 0;
}