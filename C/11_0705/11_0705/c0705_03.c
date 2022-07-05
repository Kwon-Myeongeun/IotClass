#include<stdio.h>

void func(int* pData);

int main(void) {
	int data = 10;
	int* pData = &data;
	printf("%d \n", *pData);
	//*pData = 20;
	//printf("%d \n", *pData);
	//printf("%d \n", data);

	//func(&data);
	//printf("%d \n", *pData);
	//printf("%d \n", data);

	func(pData);
	printf("%d \n", *pData);
	printf("%d \n", data);

	return 0;
}
void func(int* pData) {
	*pData = 222;
}