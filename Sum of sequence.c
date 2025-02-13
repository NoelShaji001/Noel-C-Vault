#include<stdio.h>
int main(){
	int i,n;
    float sum=0.0,result=0.0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        result=(1.0/i);
        sum=sum+result;
    }
    printf("The sum of the sequence 1+(1/2)+(1/3)+.....+(1/n) is %f",sum);   
	return 0;
}