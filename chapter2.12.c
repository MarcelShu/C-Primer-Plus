#include<stdio.h>
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);
int main(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler");

    printf("\n--------------------------------------\n");

    printf("Name: Marcel\n");
    printf("add: ChongQing");

    printf("\n--------------------------------------\n");

    int age = 35,day = 365;
    printf("My age = %d,days = %d",age,age * day);

    printf("\n--------------------------------------\n");

    jolly();
    jolly();
    jolly();
    deny();

    printf("--------------------------------------\n");

    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    printf("\n--------------------------------------\n");

    int toes;
    toes = 10;
    printf("toes = %d, toes两倍 = %d, toes立方 = %d.",toes,toes*2,toes*toes*toes);

    printf("\n--------------------------------------\n");

    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();

    printf("\n--------------------------------------\n");

    printf("starting now:\n");
    one_three();
    printf("done!");

    printf("\n--------------------------------------\n");


    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("Which nobody can deny!\n");
}


void br(void)
{
    printf("Brazil, Russia");
}
void ic(void)
{
    printf("India, China");
}

void smile(void)
{
    printf("Smile!");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}