#include<stdio.h>
/*
��� if, switch - case
swich(���� -> ��, ����){
	case ��1 : ������ ���� ���;
}
*/
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
������࿬���� : += -= *= /= %= < <= > >=

���������� : ++(1�� ����) --(1�� ����)
*/