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
	printf("과일 갯수 입력 : "); scanf_s("%d", &size);
	fruits = (Fruit*)calloc(size, sizeof(Fruit));
	for (int i = 0; i < size; i++) {
		printf("과일명 입력 : "); scanf_s("%s", (fruits+i)->name, sizeof((fruits + i)->name));
		//strcpy_s(fruits[i].name, sizeof(fruits[i].name), fruits->name);

		printf("과일가격 입력 : "); scanf_s("%d", &(fruits + i)->price);
		//fruits[i].price=fruits->price;

		printf("과일시즌 입력 : "); scanf_s("%s", (fruits + i)->season, sizeof((fruits + i)->season));
		//strcpy_s(fruits[i].season, sizeof(fruits[i].season), fruits->season);

		printf("%s, %d, %s \n", (fruits + i)->name, (fruits + i)->price, (fruits + i)->season);
		printf("%s, %d, %s \n", fruits[i].name, fruits[i].price, fruits[i].season);
		printf("--------------------------------------\n");
	}

	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s \n", fruits[i].name, fruits[i].price, fruits[i].season);
	}
	printf("=========================");
}