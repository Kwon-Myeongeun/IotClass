#include<stdio.h>
#include<stdlib.h>
#define L 3
typedef struct Fruit {
	char name[200];
	int price;
	char season[200];
}Fruit;

int main(void) {
	Fruit* fruits = 0;
	int size = 0;
	printf("���� ���� �Է� : >>"); scanf_s("%d", &size);

	fruits = (Fruit*)calloc(size, sizeof(Fruit));
	for (int i = 0; i < size; i++) {
		printf("%d��° ���ϸ� : ", i + 1); scanf_s("%s", fruits[i].name, sizeof(fruits[i].name));
		printf("%s ���� : ", fruits[i].name); scanf_s("%d", &fruits[i].price);
		printf("%s ���� : ", fruits[i].season); scanf_s("%s", fruits[i].season, sizeof(fruits[i].season));
	}
	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s \n", fruits[i].name, fruits[i].price, fruits[i].season);
	}


	//Fruit fruits[L] = { { "���",1500,"����" },
	//	{ "��",3500,"�ܿ�" },
	//	{ "�ٳ���",500,"����" }};

	//for (int i = 0; i < L; i++) {
	//	printf("%s, %d, %s \n", fruits[i].name, fruits[i].price, fruits[i].season);
	//}

	//Fruit apple = { "���",1500,"����" };
	//Fruit pear = { "��",3500,"�ܿ�" };
	//Fruit banana = { "�ٳ���",500,"����" };

	//printf("%s, %d, %s \n", apple.name, apple.price, apple.season);
	//printf("%s, %d, %s \n", pear.name, pear.price, pear.season);
	//printf("%s, %d, %s \n", banana.name, banana.price, banana.season);

	return 0;
}