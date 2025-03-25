#include<stdio.h>
int fib(int n);
int main(){
	int n,i;
	printf("Enter the terms");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d ",fib(i));
	}
	return 0;
}
int fib(int i){
	int result;
	if(i==0){
		return 0;
	}
	if(i==1){
		return 1;
	}else{
		return result=fib(i-1)+fib(i-2);
	}
}


