#include<stdio.h>

int main(void) {

	//A~F���� �迭�� ������ �� �������
	char arChar[6] = { ' ', };

	for (int i = 0; i < 6; i++) {
		arChar[i] = i + 65;
		printf("%c", arChar[i]);
	}
	printf("\n");

	//A~F���� �迭�� ������ �� �������. �� C�� �����ϰ�
	for (int i = 0; i < 5; i++) {
		arChar[i] = i > 1 ? (66 + i) : (65 + i);
		printf("%c", arChar[i]);
	}

	return 0;
}