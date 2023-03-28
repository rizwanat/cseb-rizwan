#include<stdio.h>

int main()
{
    int r,c,a[10][10];
    printf("enter no. of row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter elements\n");
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}