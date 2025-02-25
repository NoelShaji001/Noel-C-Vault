#include<stdio.h>
int main(){
	int i,j,len=0;
	char str1[30];
	printf("Enter a string: \n");
	scanf("%[^\n]",str1);
	printf("\nThe original string : %s",str1);
	for(i=0;str1[i]!='\0';i++);
	len=i;
	char str2[len];
	len=len-1;
	for(i=len,j=0;i>0,j<=len;i--,j++){
		str2[j]=str1[i];
	}
	printf("\nThe reversed string is : %s",str2);	
	return 0;
}
