/*
동적 메모리 할당

- 필요한 헤더파일 : stdlib.h
- 동적 할당(dynamic allocation)

동적 배열 할당
   자료형* 포인터명 = (자료형*)malloc(sizeof(자료형) * 길이);

동적 배열 초기화(clear allocation)
   자료형* 포인터명 = (자료형*)calloc(길이, sizeof(자료형));

동적 배열 크기 변경(resize allocation)
   포인터명 = (자료형*)realloc(포인터명, sizeof(자료형)*길이);

동적 메모리 해제
   free(포인터명);
   메모리를 해제하지 않으면 사라지지 않고 남아있기 때문에
   꼭 반드시 free함수로 메모리 해제를 해줘야 한다.
*/
#include<stdio.h>
#include<stdlib.h>

void getMaxMin(int* arData, int size, int* max, int* min);

void main(void) {
	int size = 0; int max = 0; int min = 0; int* arData;
	printf("정수의 갯수 : >>"); scanf_s("%d", &size);
	arData = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++) {
		printf("%d번째 정수 입력 :", i + 1); scanf_s("%d", arData+i);
	}
	getMaxMin(arData, size, &max, &min);
	printf("최대값 : %d \n", max);
	printf("최소값 : %d \n", min);

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