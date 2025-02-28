#include<stdio.h>
int main(){
    int n;
    printf("Enter the year:\n");
    scanf("%d",&n);
    printf("\n");
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                printf("The year is a leap year");
            }else{
                printf("The year is not a leap year");
            }
        }else{
            printf("The year is a leap year");
        }    
    }else{
        printf("The year is not a leap year");
    }
    return 0;
}            
    