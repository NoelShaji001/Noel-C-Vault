#include <stdio.h>
int main(){
	int i,n,modN,sum=0,temp;
	printf("number");
	scanf("%d",&n);
	temp=n;
	for(;n!=0;){
		modN=n%10;
		sum+=(modN*modN*modN);
		n=n/10;
	}
	if(sum==temp){
		printf("The number %d is armstrong number",temp);
	}else{
		printf("The number %d is not armstrong number",temp);
	}
	return 0;
}
	
