#include<stdio.h>
void main()
{
    int n, sum=0, r;
    printf("Enter number : ");
    scanf("%d", &n);
    while(n>9)
    {
        sum = 0;
        while (n!=0)
        {
            r = n%10;
            sum+=r*r;
            n=n/10;
        }
        n=sum;        
    }
    if(n==1)
        printf("Happy Number");
    else
        printf("Not Happy Number");
}