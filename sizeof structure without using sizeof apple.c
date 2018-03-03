#include<stdio.h>

struct
{
    int num1,num2,num3;
    char a;
    //char s1;  //char is of 4 bytes because of structure padding
}a[2];

struct{
    char a;
    char *p;
}b[2];

void main()
{
    char *start,*last;
    char *p;
    //you have 2 similar objects a[0] and a[1]
    //since both are similar, 1st element(2nd) - 1st element(1st) = memory size
    start = &b[1].a;
    last = &b[0].a;
    printf("%d",start-last); // 16, because of structure padding
    printf("\n%d",sizeof(p));
}
