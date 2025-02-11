#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the number of values");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("The elements of a are:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("The reversed array is:");
	for(i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
		
	
