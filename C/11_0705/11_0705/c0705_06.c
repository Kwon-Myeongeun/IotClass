/*
����ü(����� ���� Ÿ��)
   �߻����� ����,
   ���� ���(��� ����)�� ����ȭ(��üȭ) ���ѳ��� ��

����
   �ݺ��Ǵ� ���� ��Ҹ� ���� �����ϱ� ���ؼ�

����ü ����
   struct ����ü �̸�{
      �ڷ��� ���������,
      ...
   };

   typedef struct ����ü�̸�{
      �ڷ��� ���������,
      ...
   }����ü����;

���� �� ���ǻ���
   �Լ� �ۿ��� �����ؾ� �Ѵ�.
   ����ü ���� �� ��� ������ �ʱⰪ�� ���� �� ����.
*/

#include<stdio.h>
#include<string.h>

typedef struct Animal {
    char name[200];
    int age;
    char feed[200];
} Animal;

int main(void) {
    Animal dog = { "Max", 10, "����" };
    printf("%s, %d, %s \n", dog.name, dog.age, dog.feed);

    strcpy_s(dog.name, sizeof(dog.name), "max");
    dog.age = 15;
    strcpy_s(dog.feed, sizeof(dog.feed), "���");
    printf("%s, %d, %s \n", dog.name, dog.age, dog.feed);

}