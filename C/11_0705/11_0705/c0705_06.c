/*
구조체(사용자 정의 타입)
   추상적인 개념,
   공통 요소(멤버 변수)로 구조화(구체화) 시켜놓은 것

목적
   반복되는 공통 요소를 쉽게 관리하기 위해서

구조체 선언
   struct 구조체 이름{
      자료형 멤버변수명,
      ...
   };

   typedef struct 구조체이름{
      자료형 멤버변수명,
      ...
   }구조체별명;

선언 시 주의사항
   함수 밖에서 선언해야 한다.
   구조체 선언 시 멤버 변수에 초기값을 넣을 수 없다.
*/

#include<stdio.h>
#include<string.h>

typedef struct Animal {
    char name[200];
    int age;
    char feed[200];
} Animal;

int main(void) {
    Animal dog = { "Max", 10, "개껌" };
    printf("%s, %d, %s \n", dog.name, dog.age, dog.feed);

    strcpy_s(dog.name, sizeof(dog.name), "max");
    dog.age = 15;
    strcpy_s(dog.feed, sizeof(dog.feed), "사료");
    printf("%s, %d, %s \n", dog.name, dog.age, dog.feed);

}