#include<stdio.h>
/*
제어문 if, switch - case
swich(조건 -> 값, 변수){
	case 값1 : 실행할 문장 기술;
}
*/
int main(void) {
	char* qMsg = "당신의 혈액형은?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB";
	char* aMsg = "꼼꼼하고 세심하다.";	char* bMsg = "추진력이 좋다.";
	char* oMsg = "사교성이 좋다.";	char* abMsg = "착하다.";
	char* errorMsg = "다시 시도해주세요.";
	char* resultMsg = "";

	int choice = 0;

	printf("%s\n%s\n", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	switch (choice) {
	case 1: resultMsg = aMsg; break;
	case 2: resultMsg = bMsg; break;
	case 3: resultMsg = oMsg; break;
	case 4: resultMsg = abMsg; break;
	default: resultMsg = errorMsg; break;
	}

	puts(resultMsg);

	return 0;
}

/*
대입축약연산자 : += -= *= /= %= < <= > >=

증감연산자 : ++(1씩 증가) --(1씩 감소)
*/