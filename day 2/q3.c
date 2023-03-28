#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,arr[10],i,sum=0,flag=0;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(i=2;i<=n/2;i++){
        if(sum%i==0){
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("Not prime  sum : %d",sum);
    else
        printf("prime  sum : %d",sum);

}
