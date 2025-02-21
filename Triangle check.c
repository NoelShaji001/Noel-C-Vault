#include <stdio.h>
int main(){
	float a,b,c;
	printf("Enter your angles");
	scanf("%f %f %f" ,&a,&b,&c);
	if(a+b+c==180){
		printf("The given angles does form a triangle");
	}else{
		printf("The given angles does not form a triangle");
	}
	return 0;
	}
