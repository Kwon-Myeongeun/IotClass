#include<stdio.h>

int main(void) {
	char* qMsg = "����� ��������?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB";
	char* aMsg = "�Ĳ��ϰ� �����ϴ�.";	char* bMsg = "�������� ����.";
	char* oMsg = "�米���� ����.";	char* abMsg = "���ϴ�.";
	char* errorMsg = "�ٽ� �õ����ּ���.";
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