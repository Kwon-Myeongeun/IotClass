#include<stdio.h>

int main(void) {
	//for (int i = 0; i < 9; i++) {
	//	printf("%d", i % 3);
	//}

	//for (int i = 0; i < 26; i++) {
	//	printf("%c", i % 2 == 0 ? i + 97 : i + 65);
	//}

	/*
	break�� --> �ݺ������� ������ ���������� ������� break���� �����.
	                  ���ǹ�(if, switch)���� ����ؼ� Ȱ����.
	continue�� --> �ݺ��ϰ� �ִ� ���������� ó���� �̵���.
	                      ���ǹ�(if, switch)���� ����ؼ� Ȱ����.
	*/

	//1~10�߿� 4������ ����ϱ�
	for (int i = 0; i < 10; i++) {
		printf("%d", i + 1);
		if (i == 3)break;
	}
	printf("-------------------------");
	//1~10�߿� 4�� �����ϰ� ����ϱ�	
	for (int i = 0; i < 10; i++) {
		if (i == 3)continue;
		printf("%d", i + 1);
}

	return 0;

}