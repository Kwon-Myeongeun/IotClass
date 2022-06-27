#include<stdio.h>

/* 제어문 -> if문 - 
(1)
if(조건문){
	참 : 실행시킨 문장을 기술; or 1줄의 문장에서는 중괄호를 생략할 수 있음.
}

(2)
if(조건문){
	참 : 실행시킨 문장을 기술; or 1줄의 문장에서는 중괄호를 생략할 수 있음.
}else{
	거짓 : 실행시킬 문장을 기술; OR 1줄의 문장에서는 중괄호를 생략할 수 있음.
}

(3)
if(조건문){
	참 : 실행시킨 문장을 기술; or 1줄의 문장에서는 중괄호를 생략할 수 있음.
}else if{
	참 : 실행시킨 문장을 기술; or 1줄의 문장에서는 중괄호를 생략할 수 있음.
}else if{
	위에 있는 모든 조건에 해당하지 않으면 이곳에 문장을 기술함.
}
*/

int main(void) {
	int n1, n2 = 0;
	char* n1Msg = "첫번째 정수 입력 >>";
	char* n2Msg = "두번째 정수 입력 >>";

	printf("%s", n1Msg); scanf_s("%d", &n1);
	printf("%s", n2Msg); scanf_s("%d", &n2);

	if (n1 > n2)
		printf("큰 값은 : %d\n", n1);
	else if (n1 != n2)
		printf("큰 값은 : %d\n", n1);
	else 
		printf("큰 값은 : %d\n", n1);

	return 0;
}