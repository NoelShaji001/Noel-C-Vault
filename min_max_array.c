#include<stdio.h>
int main(){
	int i,n,max=0,min=0,p1=0,p2=0;
	printf("Enter the number of values:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			p1=i;
		}
	
		if(a[i]<min){
			min=a[i];
			p2=i;
		
		}
	}
	printf("The max number is %d and its position is %d.\nThe min number is %d and its position is %d",max,p1,min,p2);
	return 0;
}
		
			
	
	
