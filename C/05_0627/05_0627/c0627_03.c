#include<stdio.h>

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

	if (choice == 1) resultMsg = aMsg;
	else if (choice == 2) resultMsg = bMsg;
	else if (choice == 3) resultMsg = oMsg;
	else if (choice == 4) resultMsg = abMsg;
	else                         resultMsg = errorMsg;

	printf("%s\n", resultMsg);

	return 0;
}