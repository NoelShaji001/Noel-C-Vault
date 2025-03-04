#include<stdio.h>
int main(){
    int i,j,row,count=0;
    printf("Enter the row:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=0;j<=i;j++){
            if(count%2==0){
                printf("0");
            }else{
                printf("1");
            }
            count+=1;    
        }printf("\n");
    }
    return 0;
 }   