#include<stdio.h>

int main(void) {
	/*
	1)
		�ʱⰪ;
		while(����){
			ó��;
			������;
		}

	2)
		�ʱⰪ;
		do{
			ó��;
			������;
		}while(����);

	3)
		for�� --> ���۰� ���� �˰� ���� �� ���� ���
		while�� --> �ݺ�Ƚ���� ��κ� �� �� ���
	*/

	//int cnt = 0;
	//while (cnt != 10) {
	//	cnt++;
	//	printf("%d. ȫ�浿 \n", cnt);
	//}

	char* qMsg = "����� ��������?";
	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB\n5.������";
	char* aMsg = "�Ĳ��ϰ� �����ϴ�.";
	char* bMsg = "�������� ����.";
	char* oMsg = "�米���� ����.";
	char* abMsg = "���ϴ�.";
	char* errorMsg = "�ٽ� �õ����ּ���.";
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
		if (choice == 5) { resultMsg = "�����մϴ�"; }
		puts(resultMsg);
	}

	return 0;
}