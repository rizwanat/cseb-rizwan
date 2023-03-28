#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[30];
    printf("Enter string: ");
    scanf("%s",str);
    int n=0,i=0;
    while(str[i]!='\0'){
        if(str[i]=='*')
            n++;
        if(str[i]=='#')
            n--;
        i++;

    }
    if(n==0)
        printf("Valid  %d",n);
    else
        printf("Not valid  %d",n);

}
