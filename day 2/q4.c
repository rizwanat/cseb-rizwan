#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,arr[10],a[10],i,j;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=n-1,j=0;i>=0;i--,j++){
        if(arr[i]==0)
            a[j]='$';
        else
            a[j]=arr[i];
    }
    for(j=0;j<n;j++)
        printf("%d   ",a[j]);
}
