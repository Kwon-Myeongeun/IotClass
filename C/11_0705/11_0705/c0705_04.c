#include<stdio.h>
void getMaxMin(int arData[], int* max, int* min);
int main(void) {
	int arData[5] = { 40,70,30,90,80 };
	int max = 0;
	int min = 0;
	getMaxMin(arData, &max, &min);
	printf("최대값 : %d \n", max);
	printf("최소값 : %d \n", min);

	return 0;
}
void getMaxMin(int arData[], int* max, int* min) {
	*max = arData[0];
	*min = arData[0];
	for (int i = 1; i < 5; i++) {
		for (int i = 1; i < 5; i++) {
			if (*max < arData[i]) {
				*max = arData[i];
			}
			if (*min > arData[i]) {
				*min = arData[i];
			}
		}
	}
}