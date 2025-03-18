#include<stdio.h>
#include<string.h>
void palindrome(char str[]){
	int i,j,len,result=0;
	len=strlen(str);
	char str2[len];
	for(i=len-1,j=0;i>=0,j<=len;i--,j++){
		str2[j]=str[i];
	}
	str[j]='\0';
	result=strcmp(str,str2);
	printf("\nThe reversed string:%s",str2);
	if(result==0){
		printf("\nThe strings are equal");
	}else{
		printf("\nThe strings are not  equal");
	}
}
int main(){
	int i;
	char str[30]; 
	printf("Enter the string:\n");
	scanf("%s",str);
	printf("\nThe original string:%s",str);
	palindrome(str);
	return 0;
}
