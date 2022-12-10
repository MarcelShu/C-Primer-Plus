#include<stdio.h>
//单位换算小程序
int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet !\n", 6 * fathoms);
    
    return 0;
}