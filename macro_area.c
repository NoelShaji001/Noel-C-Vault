#include<stdio.h>
#define pi 3.14159
#define areaCircle(r) (pi*r*r)
#define areaCylinder(r,h) ((2*pi*r*r)+(2*pi*r*h))
int main(){
	float r,h;
	printf("Enter the radius of circle and the height of cylinder respectively:");
	scanf("%f %f",&r,&h);
	printf("Area of Circle=%f\nArea of Cylinder=%f",areaCircle(r),areaCylinder(r,h));
	return 0;
} 
