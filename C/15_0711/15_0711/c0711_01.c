/*
\n=(\r(13) + \n(10)), \r, \t, \b, \a, \", \', 
*/
#include<stdio.h>
int main(void) {
	printf("Hello~ Tipsoft.com \n");
	printf("Hello~ Tipsoft.com \rHi~~");

	int i = 5, sum;
	sum = ++i;
	printf("%d, %d \n", sum, i);
	printf("%d, %d \n", sum, ++i);
	int j = 5;
	sum = j++;
	printf("%d, %d \n", sum, j);
	printf("%d, %d \n", sum, j++);
	printf("%d, %d \n", sum, j);
	printf("1.=====================\n");

	int data1 = 5, data2 = 3;
	int res1 = data1 > data2; printf("%d \n", res1);
	res1 = data1 >= 5; printf("%d \n", res1);
	res1 = data2 > data1; printf("%d \n", res1);
	res1 = data2 <= 3; printf("%d \n", res1);
	res1 = data1 == data2; printf("%d \n", res1);
	res1 = data1 != data2; printf("%d \n", res1);
	printf("2.=====================\n");

	int data1 = 50, data2 = 30;
	int res1 = data1 > data2; printf("%d \n", res1);

	return 0;
}