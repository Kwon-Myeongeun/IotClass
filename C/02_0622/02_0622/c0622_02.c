//��ȣȭ �˰���
#include<stdio.h>
int main(void) {
	//1���� �迭 : column, col
	char pw[7] = "a1b2c3";
	//pw[0]pw[1]pw[2]pw[3]pw[4]pw[5]pw[6]
	//  1    1     1    1    1    1    1
	// 'a'   '1'   'b'  '2'  'c'  '3'  '\0'
	
	char enpw[7] = "";
	//enpw[0]enpw[1]enpw[2]enpw[3]enpw[4]enpw[5]enpw[6]
	// '\0'    '\0'    '\0'   '\0'   '\0'   '\0'  '\0'

	char dnpw[7] = "";
	//dnpw[0]dnpw[1]dnpw[2]dnpw[3]dnpw[4]dnpw[5]dnpw[6]
	// '\0'    '\0'    '\0'   '\0'   '\0'   '\0'  '\0'

	const int KEY = 3; //���ȭ�� ����
	for (int i = 0; i < sizeof(pw); i++) { //i : 0~6
		enpw[i] = (char)(pw[i] + KEY); //��ȣ�� �۾�
		//printf("%c",enpw[i]);
	}
	for (int i = 0; i < sizeof(enpw); i++) { //i : 0~6
		dnpw[i] = (char)(enpw[i] - KEY); //��ȣ�� �۾�
		//printf("%c", dnpw[i]);
	}

	printf("���� : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", pw[i]);
	}

	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", enpw[i]);
	}

	printf("\n��ȣȭ : ");
	for (int i = 0; i < sizeof(pw); i++) {
		printf("%c", dnpw[i]);
	}

	return 0;
}