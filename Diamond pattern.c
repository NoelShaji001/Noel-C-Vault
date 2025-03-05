#include<stdio.h>
int main(){   
    int i,n,j,k;
    printf("enter the rows");
    scanf("%d",&n);
    for(i=0;i<(2*n);i++){
        if(i<=n){
            for(k=1;k<=(n-i);k++){
                printf(" ");
             }
             for(j=0;j<i;j++){
                 printf("*");
                 printf(" ");
             }
        }else{
            for(k=1;k<=(i-n);k++){
                printf(" ");
            }
            for(j=n-k;j>=0;j--){
                printf("*");
                printf(" ");
            }    
        }           
        printf("\n");
             
    }
    return 0;
 } 
 
                   
        