#include<stdio.h>
//�迭 -> 1����, 2����, 3����

/*
1. �迭 ����
�ڷ��� �迭��[����] = {��1, ��2, ...};
�ڷ��� �迭��[����] = {0,};
�� : ����, 0.0 = �Ǽ�, ''=����, " "=���ڿ�

2. �迭 ũ�� : sizeof(�迭��)
	�迭�� ���� : sizeof(�迭��)/izeof(�ڷ���)

3.�迭 ���
	�迭��[index] <--- ��
	&�迭��[index] <--- �ּ�

4. index -> 0���� �����.
5. �迭�� �������̰�, �����ʹ� �迭�̴�.
*/
int main(void) {
	int ar[] = { 3,5,14,9,7 };
	int length = sizeof(ar) / sizeof(int);
	printf("%d \n", length);
	for(int i = 0; i < length; i++)
		printf("1. %d ", ar[i]);
	printf("\n");
	for (int i = 0; i < length; i++)
		ar[i] = 5 - i;
	for(int i =0; i<length; i++)
		printf("2. %d ", ar[i]);
	printf("\n %p\n", ar);
	printf("\n %p\n", &ar[0]);
	printf("\n %p\n", &ar[2]);
	printf("\n %p\n", ar+2);
	printf("\n %d, %d\n", *(ar+2), ar[2]);
	printf("\n %d, %d\n", *ar, ar[0]);
	printf("\n %d, %d\n", *(ar + 4), ar[4]);


	
}