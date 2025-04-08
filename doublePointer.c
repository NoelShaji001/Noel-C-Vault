#include<stdio.h>
int main(){
	int n,*p=&n,**q=&p;
	printf("Enter a number");
	scanf("%d",&n);
	printf("\nValue of n=%d",n);
	printf("\nValue of *p:%d",*p);
	printf("\nValiue of **q:%d",**q);
	return 0;
}
	
