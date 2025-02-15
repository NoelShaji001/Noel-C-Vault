#include<stdio.h>
int main() {
    int i,n,sum=0,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    if(n>0) {
        for(i=1; i<n; i++) {
            if(n%i==0) {
                sum+=i;
            } else {
                continue;
            }
        }
        if(sum==temp) {
            printf("The number %d is perfect",temp);
        } else {
            printf("The number %d is not perfect",temp);
        }
    } else {
        printf("Please input positive integer");
    }
    return 0;
}