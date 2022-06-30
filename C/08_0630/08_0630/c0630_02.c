#include<stdio.h>

int main(void) {
	//5개 정수를 배열에 입력, 저장하고 최대값과 최소값을 구하기
	int arData[5] = { 0, };
	int max = 0;
	int min = 0;
	for (int i = 0; i < 5; i++) {
		printf(" % d번째 정수 입력 :", i + 1);
		scanf_s("%d", &arData[i]);
	}
	max = arData[0];
	min = arData[0];
	for (int i = 1; i < 5; i++) {
		if (max < arData[i]) max = arData[i];
		if (min > arData[i]) min = arData[i];
	}
	printf("최대값 : %d, 최소값 : %d \n", max, min);

	return 0;
}