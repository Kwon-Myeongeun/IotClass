#include<stdio.h>

//int main(void) {
//
//	char* msg = "Q. ���� �� ������ �ƴ� ����?";
//	char* choiceMsg = "1.������\n2.�����\n3.�ڻԼ�\n4.�";
//	char* resultMsg = "";
//	int choice = 0;
//	int answer = 4;
//	while (1) {
//		printf("%s\n%s\n", msg, choiceMsg); scanf_s("%d", &choice);
//		if (choice == answer)
//			resultMsg = "�����Դϴ�.";
//		else if(choice >=1 && choice<=4)
//			resultMsg = "�����Դϴ�.";
//		else
//			resultMsg = "�ٽ� �õ����ּ���.";
//		printf("%s\n", resultMsg);
//		if (choice == answer) break;
//	}
//
//	return 0;
//}

//int main(void) {
//	char* qMsg = "����� ��������?";
//	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB\n0.������";
//	char* aMsg = "�Ĳ��ϰ� �����ϴ�.";
//	char* bMsg = "�������� ����.";
//	char* oMsg = "�米���� ����.";
//	char* abMsg = "���ϴ�.";
//	char* errorMsg = "�ٽ� �õ����ּ���.";
//	char* resultMsg = "";
//	int choice = 0;
//
//	do {
//		printf("%s\n%s\n", qMsg, choiceMsg); scanf_s("%d", &choice);
//		switch (choice)
//		{
//		case 1: resultMsg = aMsg; break;
//		case 2: resultMsg = bMsg; break;
//		case 3: resultMsg = oMsg; break;
//		case 4: resultMsg = abMsg; break;
//		default: resultMsg = errorMsg;
//			break;
//		}
//		if (choice == 0)
//			resultMsg = "�����մϴ�.";
//		puts(resultMsg);
//	} while (choice != 0);
//}

int main(void) {
	char* msg = "�����Ͻ� ��ȣ�� �����ϼ���.";
	char* choiceMsg = "1.�нǽŰ�\n2.��ȣ�̵�\n3.�ű԰���\n0.���� ����";
	int choice = 0;
	do {
		printf("%s\n%s\n", msg, choiceMsg); scanf_s( "%d", &choice );
		switch (choice) {
			case 1:
			case 2:
			case 3: printf("�ȳ��ϼ���. ����\n"); break;

		}
		printf("\n--------------------------\n")
	} while (choice != 0);

	return 0;
}