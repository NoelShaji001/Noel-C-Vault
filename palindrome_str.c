#include<stdio.h>
#include<string.h>
int main(){
	int i,j,len=0,result=0;
	char str1[30];
	printf("Enter a string: \n");
	scanf("%[^\n]",str1);
	printf("\nThe original string : %s",str1);
	for(i=0;str1[i]!='\0';i++);
	len=i;
	char str2[len];
	for(i=len-1,j=0;i>=0,j<=len;i--,j++){
		str2[j]=str1[i];
	}
	printf("\nThe reversed string is : %s",str2);
	result=strcmp(str1,str2);
	if(result==0){
		printf("\nThe string is palindrome");
	}else{
		printf("\nThe string is not palindrome");
	}	
	return 0;
}
