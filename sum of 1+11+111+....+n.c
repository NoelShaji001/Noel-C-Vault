#include<stdio.h>
#include<math.h>
int main(){
        int i,j,pown,num,temp,sum=1,totalsum=0;
        printf("Enter the no. of times :\n");
        scanf("%d",&num);
        temp=num;
        if(num>=0){
            printf("series=");
            for(i=1;i<=num;i++){
                sum=1;
                for(j=1;j<temp;j++){
                    pown=pow(10,j);
                    sum+=pown;
                }
                printf("%d",sum);
                temp=temp-1;
                totalsum+=sum;
            }
            printf("\nThe total sum is: %d",totalsum);
        }else{
            printf("The number is invalid");
        }        
            return 0;
}         