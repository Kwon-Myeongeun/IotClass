#include<stdio.h>

int main(void) {
	char title[20] = "♨Ansan Cafe♨";
	char menu[100] = "①추가하기\n②수정하기\n③검색하기\n④삭제하기\n⑤목록하기\n⑥나가기";
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