#include<stdio.h>
#include"sum.h"
int main(void) {
	//����, ���ڿ�, ����, �Ǽ�
	//���� : char, (int), (signed)char : -128 ~ 127 : -> 0~127(�ƽ�Ű�ڵ�)
	//						    unsiged char : 0~255 : �Ӻ���忡�� ���
	//			unsigned char = 0xAA; --> 1010 1010
	//���ڿ� : string --> char *a = "korea";
	//                           char a[100] = "korea";
	//������ : int i = 100; ������ �⺻ ũ�� --> int : 4 ����Ʈ(����ũ�����μ��� : 2b)
	//            long j = 100; <-- �»� 4����Ʈ
	//            short <-- 2byte, �Ӻ���� ������ �� ���� ���, ����
	//                                    ���� : 8��Ʈ -> 10bit�� ���� �����.
	//                                           : 32��Ʈ�� -> 12bit�� ���� �����.
	//�Ǽ��� : float --> 4byte
	//            double --> 8byte, double y = 3.14; �Ǽ��� �⺻ ũ�� : 8byte

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