#include<stdio.h>

int main(void) {
	char title[20] = "��Ansan Cafe��";
	char menu[100] = "���߰��ϱ�\n������ϱ�\n��˻��ϱ�\n������ϱ�\n�����ϱ�\n�쳪����";
	char arName[200][100] = { "", };
	char temp[100] = "";
	int arPrice[200] = { 0, };
	int choice, cnt, isDup, foundInx = 0;
	while (1) {
		printf("%s\n%s\n", title, menu);
		scanf_s("%d", &choice);
		if (choice == 6)break;
		switch (choice)
		{
		default:
			break;
		}
	}

	return 0;
}