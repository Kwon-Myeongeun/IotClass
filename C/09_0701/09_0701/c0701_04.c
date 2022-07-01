#include<stdio.h>

int main(void) {
	int arr[2][3] = { 0, };
	int total = 0;
	double avg = 0.0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d동 %d호 월세 입력 [단위:만원]\n", i + 1, j + 1);
			scanf_s("%d", arr[i] + j);
			total += arr[i][j];
		}
		avg = (double)total / 6;
		printf("총 월세 : %d만원\n", total);
		printf("총 월세평균 : %.2f만원\n", avg);
	}

	return 0;
}