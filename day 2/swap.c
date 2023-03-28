#include<stdio.h>

int main()
{
    int a=10,b=20,temp;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d   %d",*p1,*p2);
    return 0;
}