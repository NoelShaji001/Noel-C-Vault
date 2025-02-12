#include<stdio.h>
int main(){
	int i,n,key,pos=0,flag=0;
	printf("Enter the number of values:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the key:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key==a[i]){
			flag=1;
			pos=i;
		}else{
            flag=0;
        }    
	}
	if(flag==0){
		printf("The number not found");
	}else{
		printf("The number found and its position is %d",pos);
	}
	return 0;
}
