#include<stdio.h>
int main() {
    int i,j,result=0,n,l;
    printf("××MULTIPLICATION TABLE OF 1 TO N NUMBERS××\n\n");
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Enter the limit upto which the number should be multiplied:\n");
    scanf("%d",&l);
    for(i=1;i<=n;i++){
        printf("\nMULTIPLICATION TABLE OF %d\n",i);
        for(j=1;j<=l;j++){
            result=i*j;
            printf("%d × %d = %d\n",i,j,result);
            result=0;
        }
    }
    return 0;
}            
    