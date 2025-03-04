#include <stdio.h>
int main(){
    int num,i,j,flag;
    printf("Enter the number");
    scanf("%d",&num);
    printf("\n Prime Numbers:");
    for(i=2;i<=num;i++){
        flag=1;
            for(j=2;j<=i;j++){
            if(i!=j){
                if(i%j==0){
                flag=0;
                    break;
                }else{
                    flag=1;
                }        
            }
        }
        if(flag==1){
            printf(" %d ",i);
        }
   }
   return 0;
 }           
                        
    
