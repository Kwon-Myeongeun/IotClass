#include <stdio.h>


//int main(void) {
//	//���� �ڸ�Ʈ : //
//	//������ �ڸ�Ʈ : /* */
//
//	//�ٹٲ� : \n
//	printf("���ѹα� \n");
//	printf("ȫ�浿 \n");
//
//	return 0;
//}


int main(void) {

	int i = 10;
	short j = -100;
	float f = 123.456;
	double d = 123.456;
	char c = 'q';
	char* str = "korea";

	printf("%d, %d, %d\n", i,sizeof(int), sizeof(i));
	printf("%d, %d, %d\n", j, sizeof(short), sizeof(j));
	printf("%.3f, %d, %d\n", f, sizeof(float), sizeof(f));
	printf("%.2f, %d, %d\n", d, sizeof(double), sizeof(d));
	printf("%c, %d, %d\n", c, sizeof(char), sizeof(c));
	//�ּ��� �� ũ�� 4byte (char *)
	printf("%s, %d, %d\n", str, sizeof(char *), sizeof(str));
	printf("%d \n", strlen(str));
	
	return 0;
}
