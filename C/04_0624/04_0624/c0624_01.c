/* (shift) : data << ÀÌµ¿¼ýÀÚ, data >> ÀÌµ¿¼ýÀÚ
                        °ö¼Á( x2)             ³ª´°¼À( /2)
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