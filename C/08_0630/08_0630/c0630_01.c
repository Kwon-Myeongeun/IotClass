#include<stdio.h>

int main(void) {

	//A~F까지 배열로 저장한 후 출력하자
	char arChar[6] = { ' ', };

	for (int i = 0; i < 6; i++) {
		arChar[i] = i + 65;
		printf("%c", arChar[i]);
	}
	printf("\n");

	//A~F까지 배열로 저장한 후 출력하자. 단 C를 제외하고
	for (int i = 0; i < 5; i++) {
		arChar[i] = i > 1 ? (66 + i) : (65 + i);
		printf("%c", arChar[i]);
	}

	return 0;
}