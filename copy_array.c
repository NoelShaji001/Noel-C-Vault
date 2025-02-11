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
	int b[n];
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	printf("\nThe elements of b are:");
	for(i=0;i<n;i++){
		printf("%d",b[i]);
	}
	return 0;
}
