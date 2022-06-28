#include<stdio.h>

int main(void) {
	//for (int i = 0; i < 9; i++) {
	//	printf("%d", i % 3);
	//}

	//for (int i = 0; i < 26; i++) {
	//	printf("%c", i % 2 == 0 ? i + 97 : i + 65);
	//}

	/*
	break문 --> 반복문에서 강제로 빠져나오는 방법으로 break문을 사용함.
	                  조건문(if, switch)으로 사용해서 활용함.
	continue문 --> 반복하고 있는 증감값으로 처리를 이동함.
	                      조건문(if, switch)으로 사용해서 활용함.
	*/

	//1~10중에 4까지만 출력하기
	for (int i = 0; i < 10; i++) {
		printf("%d", i + 1);
		if (i == 3)break;
	}
	printf("-------------------------");
	//1~10중에 4만 제외하고 출력하기	
	for (int i = 0; i < 10; i++) {
		if (i == 3)continue;
		printf("%d", i + 1);
}

	return 0;

}