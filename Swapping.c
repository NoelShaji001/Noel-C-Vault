#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter your numbers");
	scanf("%d %d" ,&a,&b);
	printf("The original numbers are a=%d and b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("The swapped numbers are a=%d and b=%d\n",a,b);
	return 0;
	}
	
