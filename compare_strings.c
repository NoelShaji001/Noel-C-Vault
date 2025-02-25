#include<stdio.h>
#include<string.h>
int main (){
	int i,j,comp;
	char str[20],str1[20];
	printf("Enter a word\n");
	scanf("%s",str);
	printf("Enter another word\n");
	scanf("%s",str1);
	comp=strcmp(str,str1);
	if(comp==0){
		printf("The words are equal");
	}else{
		printf("The strings are not equal");
	}	
	return 0;
}
	
