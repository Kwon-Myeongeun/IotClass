#include<stdio.h>

//선택영역 코멘트설정 : ctrl + k + c
//선택영역 코멘트해제 : ctrl + k + u
//int main(void) {
//
//	int age = 10;
//	float height = 125.3f;
//	double weight = 35.956;
//	char grade = 'a';
//	char* name = "홍길동";
//
//	printf("나이 : %d살 \n", age);
//	printf("키 : %.2lfcm \n", height);
//	printf("몸무게 : %c등급 \n", grade);
//	printf("이름 : %s \n", name);
//	printf("%d \n", sizeof("홍길동"));
//	//형변환
//	age = (int)20.567;
//	printf("나이 : %d살 \n", age);
//
//	return 0;
//}


//int main(void) {
//	char* name = "고양이";
//	int age = 3;
//	char gender = 'M';
//	float weight = 6.3;
//	printf("이름 : %s \n", name);
//	printf("이름 : ");
//	puts(name);
//	printf(" \"나이\" : %d살 \n", age);
//	printf(" \'나이\' : %d살 \n", age);
//	printf("성별 : \t%c \n", gender);
//	printf(" \\몸무게\\ : %.2fkg \n", weight);
//
//	//제어문자
//	//\n --> new line(줄바꿈, 개행)
//	//\t --> tab key
//	//\\ --> \출력
//	//\' --> '출력
//	//\" --> "출력
//
//}

int main(void) {
	//자동 형변환
	char data = 67;
	printf("%d \n", 11 / 9);
	printf("%lf \n", 11.0/ 9);
	printf("%c \n", data);
	printf("%d \n", data);
	//강제 형변환
	printf("%.2lf \n", 11/(double)9);

	printf("%.2lf \n", (int)8.43 + 2.59);
	printf("%d \n", (int)(8.43 + 2.59));
	printf("%d \n", (int)8.43 + (int)2.59);

	//문자 형변환
	printf("%d \n", 'A'+1);
	printf("%c \n", 'A' + 1);

}