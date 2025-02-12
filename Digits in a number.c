#include<stdio.h>
int main(){   
    int num,modN,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for(;num!=0;){
        modN=num/10;
        sum+=1;
        num/=10;
    }
    printf("no of digits=%d",sum);
    return 0;
}        