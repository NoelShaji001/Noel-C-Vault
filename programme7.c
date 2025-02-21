#include <stdio.h>
int main(){
	int a,b;
	printf("Enter your numbers:");
	scanf("%d %d",&a,&b);
	(a>b)?(printf("The largest is %d",a)):(printf("The largest is %d",b)); 
	return 0;
	}
