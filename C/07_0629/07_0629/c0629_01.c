#include<stdio.h>

//int main(void) {
//
//	char* msg = "Q. 다음 중 동물이 아는 것은?";
//	char* choiceMsg = "1.강아지\n2.고양이\n3.코뿔소\n4.어묵";
//	char* resultMsg = "";
//	int choice = 0;
//	int answer = 4;
//	while (1) {
//		printf("%s\n%s\n", msg, choiceMsg); scanf_s("%d", &choice);
//		if (choice == answer)
//			resultMsg = "정답입니다.";
//		else if(choice >=1 && choice<=4)
//			resultMsg = "오답입니다.";
//		else
//			resultMsg = "다시 시도해주세요.";
//		printf("%s\n", resultMsg);
//		if (choice == answer) break;
//	}
//
//	return 0;
//}

//int main(void) {
//	char* qMsg = "당신의 혈액형은?";
//	char* choiceMsg = "1.A\n2.B\n3.O\n4.AB\n0.나가기";
//	char* aMsg = "꼼꼼하고 세심하다.";
//	char* bMsg = "추진력이 좋다.";
//	char* oMsg = "사교성이 좋다.";
//	char* abMsg = "착하다.";
//	char* errorMsg = "다시 시도해주세요.";
//	char* resultMsg = "";
//	int choice = 0;
//
//	do {
//		printf("%s\n%s\n", qMsg, choiceMsg); scanf_s("%d", &choice);
//		switch (choice)
//		{
//		case 1: resultMsg = aMsg; break;
//		case 2: resultMsg = bMsg; break;
//		case 3: resultMsg = oMsg; break;
//		case 4: resultMsg = abMsg; break;
//		default: resultMsg = errorMsg;
//			break;
//		}
//		if (choice == 0)
//			resultMsg = "종료합니다.";
//		puts(resultMsg);
//	} while (choice != 0);
//}

int main(void) {
	char* msg = "문의하실 번호를 선택하세요.";
	char* choiceMsg = "1.분실신고\n2.번호이동\n3.신규가입\n0.상담원 연결";
	int choice = 0;
	do {
		printf("%s\n%s\n", msg, choiceMsg); scanf_s( "%d", &choice );
		switch (choice) {
			case 1:
			case 2:
			case 3: printf("안녕하세요. 고객님\n"); break;

		}
		printf("\n--------------------------\n")
	} while (choice != 0);

	return 0;
}