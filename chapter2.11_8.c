#include<stdio.h>
int main(void)
{
    int a, b;
    a = 5;
    b = 2;
    b = a;
    a = b;
    printf("%d %d\n",b, a);
    return 0;
}
//貌似并不会向python一样把变量关联赋值