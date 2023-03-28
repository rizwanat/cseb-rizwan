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
    
    printf("Diagonal UpperD LowerD non dia\n");
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j)
                printf("%d \t \t \t \n",a[i][j]);
            else if(i<j)
                printf("\t %d \t \t %d\n",a[i][j],a[i][j]);
            
            else
                printf("\t \t %d \t %d\n",a[i][j],a[i][j]);
        }
        //printf("\n");
    }
    
    
    return 0;
}