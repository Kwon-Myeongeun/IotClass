#include<stdio.h>

int main(void) {
	/*
	1)
		초기값;
		while(조건){
			처리;
			증감값;
		}

	2)
		초기값;
		do{
			처리;
			증감값;
		}while(조건);

	3)
		for문 --> 시작과 끝을 알고 있을 때 많이 사용
		while문 --> 반복횟수를 대부분 모를 때 사용
	*/

	//int cnt = 0;
	//while (cnt != 10) {
	//	cnt++;
	//	printf("%d. 홍길동 \n", cnt);
	//}

	char* qMsg = "당신의 혈액형은?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB\n5.나가기";
	char* aMsg = "꼼꼼하고 세심하다.";
	char* bMsg = "추진력이 좋다.";
	char* oMsg = "사교성이 좋다.";
	char* abMsg = "착하다.";
	char* errorMsg = "다시 시도해주세요.";
	char* resultMsg = "";
	int choice = 0;

	while (choice != 5) {
		printf("%s\n%s\n", qMsg, choiceMsg);
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:resultMsg = aMsg; break;
		case 2:resultMsg = bMsg; break;
		case 3:resultMsg = oMsg; break;
		case 4:resultMsg = abMsg; break;
		default: resultMsg = errorMsg; break;
		}
		if (choice == 5) { resultMsg = "종료합니다"; }
		puts(resultMsg);
	}

	return 0;
}