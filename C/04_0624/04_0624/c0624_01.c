/* (shift) : data << �̵�����, data >> �̵�����
                        ����( x2)             ������( /2)
                        11<<3               28>>3
 */


#include<stdio.h>

int main(void) {
    printf("%d \n", 11 << 3);
    printf("%d \n", 18 >> 3);
    printf("%d \n", 10 | 11);
    printf("%d \n", 10 & 11);
    printf("%d \n", 10 ^ 11);
    printf("%d \n", ~11);
}