#include<stdio.h>
int main(){
	const float pi=3.14159;
	float radius,area;
	printf("Enter the radius:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("The area of the circle is %f\n",area);
	return 0;
	}
	
	
