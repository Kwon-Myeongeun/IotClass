#include<stdio.h>
#include<string.h>

int main(void) {

	/*
	-���ڿ�2
	 -���ڿ� ���� �Լ� -> strcpy_s(), strcmp(), strlen() <-- string.h ����
	 -strcpy_s(�迭��, sizeof(�迭��), "ī���� ���ڿ�")
		(���� �迭���� ������ ���ο� ������ ������.)
	 -strcmp(��1, ��2); ���ڿ� �� -> ������ :0. ���� ������ :1
	 -strlen(�迭��); ���� ���ڿ��� ����(����), ��(NULL)���� ����
	*/

	char nation[10] = "korea";
	char temp[10];
	char fruit[10] = "banana";
	char fruit1[10] = "Apple";
	strcpy_s(temp, sizeof(temp), "orange");
	printf("1. %s \n", temp);
	strcpy_s(temp, sizeof(temp), fruit);
	printf("2. %s \n", temp);
	strcpy_s(temp, sizeof(temp), fruit1);
	printf("3. %s \n", temp);

	if (strcmp("korea", "banana") ==1)
		printf("���� �ʽ��ϴ�.");
	if (strcmp("korea", "korea") ==0)
		printf("�ΰ��� �����ϴ�.");
	if (!strcmp("korea", "korea") ==1)
		printf("�ΰ��� �����ϴ�.");
	if (strcmp(nation, fruit1) == 1)
		printf("���� �ʽ��ϴ�.");

	printf("4. %d\n", strlen("korea"));
	return 0;
}