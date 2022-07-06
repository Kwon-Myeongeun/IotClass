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
	printf("과일 갯수 입력 : >>"); scanf_s("%d", &size);

	fruits = (Fruit*)calloc(size, sizeof(Fruit));
	for (int i = 0; i < size; i++) {
		printf("%d번째 과일명 : ", i + 1); scanf_s("%s", fruits[i].name, sizeof(fruits[i].name));
		printf("%s 가격 : ", fruits[i].name); scanf_s("%d", &fruits[i].price);
		printf("%s 시즌 : ", fruits[i].season); scanf_s("%s", fruits[i].season, sizeof(fruits[i].season));
	}
	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s \n", fruits[i].name, fruits[i].price, fruits[i].season);
	}


	//Fruit fruits[L] = { { "사과",1500,"가을" },
	//	{ "배",3500,"겨울" },
	//	{ "바나나",500,"여름" }};

	//for (int i = 0; i < L; i++) {
	//	printf("%s, %d, %s \n", fruits[i].name, fruits[i].price, fruits[i].season);
	//}

	//Fruit apple = { "사과",1500,"가을" };
	//Fruit pear = { "배",3500,"겨울" };
	//Fruit banana = { "바나나",500,"여름" };

	//printf("%s, %d, %s \n", apple.name, apple.price, apple.season);
	//printf("%s, %d, %s \n", pear.name, pear.price, pear.season);
	//printf("%s, %d, %s \n", banana.name, banana.price, banana.season);

	return 0;
}