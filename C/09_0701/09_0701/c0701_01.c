#include<stdio.h>
#include<string.h>

int main(void) {

	/*
	-문자열2
	 -문자열 관련 함수 -> strcpy_s(), strcmp(), strlen() <-- string.h 지원
	 -strcpy_s(배열명, sizeof(배열명), "카피할 문자열")
		(기존 배열값을 전달한 새로운 값으로 변경함.)
	 -strcmp(값1, 값2); 문자열 비교 -> 같으면 :0. 같지 않으면 :1
	 -strlen(배열명); 실제 문자열의 길이(갯수), 널(NULL)문자 제외
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
		printf("같지 않습니다.");
	if (strcmp("korea", "korea") ==0)
		printf("두값은 같습니다.");
	if (!strcmp("korea", "korea") ==1)
		printf("두값은 같습니다.");
	if (strcmp(nation, fruit1) == 1)
		printf("같지 않습니다.");

	printf("4. %d\n", strlen("korea"));
	return 0;
}