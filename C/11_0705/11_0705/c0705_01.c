#include<stdio.h>

int* getMaxandMin(int arData[]);
void printFrom1To10(void);
int getTotalFrom1To10(void);
int change(int num);

int main(void) {
	int arData[5] = {50,30,60,20,100};
	int* MaxMin = 0;
	int num;

	//printFrom1To10();
	int sum = getTotalFrom1To10();
	//printf("%d \n",sum);
	//printf("���� �Է� : >>"); scanf_s("%d", &num);
	//printf("%d \n", change(num));

	printf("mp1 : %p \n", MaxMin);
	MaxMin = getMaxandMin(arData);
	printf("mp2 : %p \n", MaxMin);
	printf("�ִ밪 : %d \n", MaxMin[0]);
	printf("�ּҰ� : %d \n", MaxMin[1]);

	return 0;
}
void printFrom1To10() {
	for (int i = 0; i < 10; i++) {
		printf("%d ", i+1);
	}
	printf("\n");
}

int getTotalFrom1To10(void) {
	int total = 0;
	for (int i = 0; i < 10; i++) {
		total += (i + 1);
	}
	return total;
}

int change(int num) {
	return ++num;
}
int* getMaxandMin(int arData[]) { //int arData[] = 1���� �迭�� �����ּ�
	static int max_min[2] = { 0, };

	int max = arData[0];
	int min = arData[0];
	for (int i = 1; i < 5; i++) {
		if (max < arData[i]) {
			max = arData[i];
		}
		if (min > arData[i]) {
			min = arData[i];
		}
	}

	max_min[0] = max;
	max_min[1] = min;
	for (int i = 0; i < 5; i++) {
		printf("%d \n", arData[i]);
	}
	printf("%d, %d \n", max, min);
	printf("%d, %d \n", max_min[0], max_min[1]);
	printf("fp : %p \n", max_min);
	return max_min;
}