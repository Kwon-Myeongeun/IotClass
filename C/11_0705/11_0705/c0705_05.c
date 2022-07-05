/*
���� �޸� �Ҵ�

- �ʿ��� ������� : stdlib.h
- ���� �Ҵ�(dynamic allocation)

���� �迭 �Ҵ�
   �ڷ���* �����͸� = (�ڷ���*)malloc(sizeof(�ڷ���) * ����);

���� �迭 �ʱ�ȭ(clear allocation)
   �ڷ���* �����͸� = (�ڷ���*)calloc(����, sizeof(�ڷ���));

���� �迭 ũ�� ����(resize allocation)
   �����͸� = (�ڷ���*)realloc(�����͸�, sizeof(�ڷ���)*����);

���� �޸� ����
   free(�����͸�);
   �޸𸮸� �������� ������ ������� �ʰ� �����ֱ� ������
   �� �ݵ�� free�Լ��� �޸� ������ ����� �Ѵ�.
*/
#include<stdio.h>
#include<stdlib.h>

void getMaxMin(int* arData, int size, int* max, int* min);

void main(void) {
	int size = 0; int max = 0; int min = 0; int* arData;
	printf("������ ���� : >>"); scanf_s("%d", &size);
	arData = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("%d��° ���� �Է� :", i + 1); scanf_s("%d", arData+i);
	}
	getMaxMin(arData, size, &max, &min);
	printf("�ִ밪 : %d \n", max);
	printf("�ּҰ� : %d \n", min);

	return 0;
}
void getMaxMin(int* arData, int size, int* max, int* min) {
	*max = arData[0];
	*min = arData[0];
	for (int i = 1; i < size; i++) {
		if (*max < arData[i]) {
			*max = arData[i];
		}
		if (*min > arData[i]) {
			*min = arData[i];
		}
	}
	
}