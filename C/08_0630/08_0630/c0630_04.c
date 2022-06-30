#include<stdio.h>

int main(void) {
	char fruit[6] = { 'a', 'p', 'p', 'l', 'e' };
	char fruit1[6] = "apple";
	char* fruit2[3] = { "cat", "dog", "cheep" };

	printf("%s\n", fruit);
	printf("%s\n", fruit1);
	for (int i = 0; i < 3; i++) {
		printf("%s \n", fruit2[i]);
	}
	fruit[0] = 'A';
	printf("%s\n", fruit);
	fruit1[0] = 'A';
	printf("%s\n", fruit1);
	printf("====================\n");

	char fruit3[4][10];
	for (int i = 0; i < 4; i++)
		scanf_s("%s", fruit3[i], sizeof(*fruit3));
	for (int i = 0; i < 4; i++) {
		printf("%s\n", fruit3[i]);
	}
	return 0;
}