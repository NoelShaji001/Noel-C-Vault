#include<stdio.h>
int sumArray(int arr[],int n);
int main(){
	int i,n;
	printf("Enter the no of elements");
	scanf("\n%d",&n);
	int myArray[n];
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&myArray[i]);
	}
	printf("\nThe sum of elements:%d",sumArray(myArray,n)); 
	return 0;
}
int sumArray(int arr[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

