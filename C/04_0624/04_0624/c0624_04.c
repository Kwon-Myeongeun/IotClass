//���� ������
//(A)    ? (B)              : (C);   --> ���ǽ�? ��:Bó�� ����:Có�� 


#include<stdio.h>

//int main(void) {
//	printf("%d \n", 11 > 10 ? 10 : 11);
//	printf("%d \n", 11 > 10 ? 10 : 11);
//
//}


int main(void) {
	int n1, n2, result = 0;
	char* n1Msg = "ù��° ���� : >>";  //char n1Msg[20]
	char* n2Msg = "�ι�° ���� : >>";  //char n1Msg[20]
	int condition1, condition2 = 0 ;
	char* format = "";
	printf("%s", n1Msg); scanf_s("%d", &n1);
	printf("%s", n2Msg); scanf_s("%d", &n2);

	condition1 = n1 > n2;
	condition2 = n1 == n2;

	format = condition2 ? "%s" : "�� ū ���� %d";

	printf(format, condition1 ? n1 :
		condition2 ? "�� ���� �����ϴ�." : n2);



	return 0;
}