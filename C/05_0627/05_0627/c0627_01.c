#include<stdio.h>

int main(void) {
	char* qMsg = "����� ��������?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB";
	char* aMsg = "�Ĳ��ϰ� �����ϴ�.";	char* bMsg = "�������� ����.";
	char* oMsg = "�米���� ����.";	char* abMsg = "���ϴ�.";
	char* errorMsg = "�ٽ� �õ����ּ���.";

	int condition1, condition2, condition3, condition4 = 0;
	int choice = 0;

	printf("%s\n%s\n", qMsg, choiceMsg);
	scanf_s("%d", &choice);

	condition1 = choice == 1;
	condition2 = choice == 2;
	condition3 = choice == 3;
	condition4 = choice == 4;

	printf("%s\n", condition1 ? aMsg :
		condition2 ? bMsg :
		condition3 ? oMsg :
		condition4 ? abMsg : errorMsg);



	return 0;
}