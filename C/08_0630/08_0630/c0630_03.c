#include<stdio.h>

int main(void) {
	//aBcDeFgHi...XyZ배열에 담기
	char arChar[26] = { ' ', };
	for (int i = 0; i < 26; i++) {
		arChar[i] = (i % 2 == 0) ? (i + 97) : (i+65);
		printf("%c", arChar[i]);
	}
	printf("\n");

	char* a = "korea";
	char* b[4] = { "dog", "cat", "korea", "japan" };
	char c[3][10] = { "dog1", "cat2", "korea3"};

	for (int i = 0; i < 6; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
	printf("%s",a);
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%s ", b[i]);
	}

	return 0;
}

/*

*/