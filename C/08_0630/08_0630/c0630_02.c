#include<stdio.h>

int main(void) {
	//5�� ������ �迭�� �Է�, �����ϰ� �ִ밪�� �ּҰ��� ���ϱ�
	int arData[5] = { 0, };
	int max = 0;
	int min = 0;
	for (int i = 0; i < 5; i++) {
		printf(" % d��° ���� �Է� :", i + 1);
		scanf_s("%d", &arData[i]);
	}
	max = arData[0];
	min = arData[0];
	for (int i = 1; i < 5; i++) {
		if (max < arData[i]) max = arData[i];
		if (min > arData[i]) min = arData[i];
	}
	printf("�ִ밪 : %d, �ּҰ� : %d \n", max, min);

	return 0;
}