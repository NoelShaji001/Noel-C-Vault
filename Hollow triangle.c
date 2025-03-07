#include<stdio.h>
int main(){   
    int i,n,j,k;
    printf("enter the rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=n-i;j>0;j--){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                if(i!=n){
                    if(k==1||k==i){
                        printf("*");
                        printf(" ");
                    }else{
                        printf(" ");
                        printf(" ");
                    }
                }else{
                    printf("*");
                    printf(" ");
                }
            }
            printf("\n");
    }
    return 0;
}             