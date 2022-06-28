#include<stdio.h>

int main(void) {
	//10의 배수마다 구분
	//for (int i = 0; i < 100; i++) {
	//	printf("%d ", i + 1);
	//	if ((i + 1) % 10 == 0) {
	//		printf("\n");
	//	}
	//}

	//for (int i = 100; i > 0; i--) {
	//	printf("%d ", i);
	//	if (i % 10 == 0)
	//		printf("\n");
	//}

	//for (int i = 0; i < 100; i++) {
	//	printf("%d ", (100 - i));
	//	if ((100 - i) % 10 == 0) {
	//		printf("\n");
	//	}
	//}

	//짝수만 출력
	//for (int i = 0; i < 100; i++) {
	//	if ((i + 1) % 2 == 0)
	//		printf("%d ", (i + 1));
	//}

	//for (int i = 0; i < 50; i++) {
	//	printf("%d ", (i + 1)*2);
	//}

	//for (int i = 0; i < 100; i+=2) {
	//	printf("%d ", i+2);
	//}

	//총합을 출력
	//int sum = 0;
	//for (int i = 0; i < 10; i++) {
	//	sum += (i + 1);
	//}
	//printf("%d", sum);

	//int end = 0;
	//int sum = 0;
	//char* msg = "1 ~ end까지의 합\nend 값 입력 : >>";
	//printf("%s", msg); scanf_s("%d", &end);
	//for (int i = 0; i < end; i++) {
	//	sum += (i + 1);
	//}
	//printf("%d\n", sum);
	
	//for (int i = 0; i < 6; i++) {
	//	printf("%c", i = 65);
	//}

	//int temp = 0;
	//for (int i = 0; i < 5; i++) {
	//	temp = i;
	//	if (i > 0)temp++;
	//	printf("%c", temp + 65);
	//}

	//3항 연산자 활용
	for (int i = 0; i < 5; i++) {
		printf("%c", i > 0 ? i + (65 + 1) : i + 65);
	}
	return 0;
}