#include<stdio.h>

int main(void) {
	int arr[2][3] = { 1,2,3,4,5,6 };

	printf("%d, %d, %d \n", arr[0][0], arr[0][2], arr[1][2]);
	printf("%p, %p, %p \n", arr, arr[0], arr[1]);
	printf("%d, %d, %d \n", **arr, *(arr[0]), *(arr[1]));
	printf("%p, %p, %p \n", arr, arr+0, arr+1);
	printf("%p, %p, %p \n", arr, arr[0] + 1, (arr + 1)+1);
	printf("%d, %d, %d \n", **arr, *(arr[0]+1), *(*(arr+1)+1));

	//for (int i = 2; i < 10; i++) {
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i * j);
	//	}
	//}

	printf("\n------------------------\n");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1) {
				arr[i][j] = i + (j + 3);
			}
			else {
				arr[i][j] = j + 1;
			}
		}
	}
	return 0;
}