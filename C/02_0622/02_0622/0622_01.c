#include<stdio.h>

//���ÿ��� �ڸ�Ʈ���� : ctrl + k + c
//���ÿ��� �ڸ�Ʈ���� : ctrl + k + u
//int main(void) {
//
//	int age = 10;
//	float height = 125.3f;
//	double weight = 35.956;
//	char grade = 'a';
//	char* name = "ȫ�浿";
//
//	printf("���� : %d�� \n", age);
//	printf("Ű : %.2lfcm \n", height);
//	printf("������ : %c��� \n", grade);
//	printf("�̸� : %s \n", name);
//	printf("%d \n", sizeof("ȫ�浿"));
//	//����ȯ
//	age = (int)20.567;
//	printf("���� : %d�� \n", age);
//
//	return 0;
//}


//int main(void) {
//	char* name = "�����";
//	int age = 3;
//	char gender = 'M';
//	float weight = 6.3;
//	printf("�̸� : %s \n", name);
//	printf("�̸� : ");
//	puts(name);
//	printf(" \"����\" : %d�� \n", age);
//	printf(" \'����\' : %d�� \n", age);
//	printf("���� : \t%c \n", gender);
//	printf(" \\������\\ : %.2fkg \n", weight);
//
//	//�����
//	//\n --> new line(�ٹٲ�, ����)
//	//\t --> tab key
//	//\\ --> \���
//	//\' --> '���
//	//\" --> "���
//
//}

int main(void) {
	//�ڵ� ����ȯ
	char data = 67;
	printf("%d \n", 11 / 9);
	printf("%lf \n", 11.0/ 9);
	printf("%c \n", data);
	printf("%d \n", data);
	//���� ����ȯ
	printf("%.2lf \n", 11/(double)9);

	printf("%.2lf \n", (int)8.43 + 2.59);
	printf("%d \n", (int)(8.43 + 2.59));
	printf("%d \n", (int)8.43 + (int)2.59);

	//���� ����ȯ
	printf("%d \n", 'A'+1);
	printf("%c \n", 'A' + 1);

}