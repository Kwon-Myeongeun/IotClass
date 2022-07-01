#include<stdio.h>

//2차원 배열
int main(void) {
	int test[2][3] = { 2,3,4,5,6,7 };
	int bang[][5] = { {0,1,2,3,4},
		{5,6,7,8,9},
		{10,11,12,13,14},
		{15,16,17,18,19} };

	printf("1. %d\n", sizeof(bang));
	printf("2. %d,%d,%d,%d\n", sizeof(bang[0])
		, sizeof(bang[1])
		, sizeof(bang[2])
		, sizeof(bang[3]));

	for (int i = 0; i < 6; i++) {
		if (i % 3 == 0) {
			printf("\n");
		}
		printf("%d ", test[i / 3][i % 3]);
	}

	return 0;
}