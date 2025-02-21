#include <stdio.h>
int main(){
	int i,fact=1,temp,count=1;
	printf("Enter a number");
	scanf("%d",&i);
	temp=i;
	if(i>=0){
		while(i>0){
			fact*=i;
			i-=1;
			}
		printf("Factorial of %d is %d",temp,fact);
	}else{
	printf("invalid number entered");
	return 0;
	}
}
			
