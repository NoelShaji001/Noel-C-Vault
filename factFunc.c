#include<stdio.h>
int fact(int);
int main(){
	int n;
	printf("\nEnter a number");
	scanf("%d",&n);
	if(n<0){printf("\nThe number is not possible");}
	printf("\nThe factorial of %d is %d",n,fact(n));
	return 0;
}
int fact(int n){
	int i,sum=1;
	for(i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}

