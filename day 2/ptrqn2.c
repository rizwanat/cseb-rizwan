#include<stdio.h>

int main()
{
    int a=100,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    
    int n = *p1/ *p2;
    printf("%d  ",n);
    
    return 0;
}