#include<stdio.h>
void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int x,y,*ptr1,*ptr2;
	printf("Enter 2 numbers");
	scanf("%d%d",&x,&y);
	ptr1=&x;
	ptr2=&y;
	printf("\nBefore swapping:x=%d,y=%d",x,y);
	swap(&x,&y);
	printf("\nAfter swapping:x=%d,y=%d",x,y);
	return 0;
}
	

