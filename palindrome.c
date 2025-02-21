#include <stdio.h>
#include<math.h>
int main(){
	int i,sum=0,modN,n,p,l,temp;
	printf("Enter the length of number");
	scanf("%d",&l);
	printf("Enter the number");
	scanf("%d",&n);
	temp=n;
	p=pow(10,l-1);
	for(i=1;i<=l;i++){
		modN=n%10;
		sum+=modN*p;
		p/=10;
		n/=10;
	}
	if(temp==sum){
		printf("The number is palindrome");
	}else{
	printf("The number is not palindrome");
	} 
	return 0;
}
