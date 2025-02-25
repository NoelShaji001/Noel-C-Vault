#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i,j,count=0;
	char str[30];
	char vowels[6]="aeiou";
	printf("Enter a string;\n");
	scanf("%[^\n]",str);
	int len=strlen(str);
	for(i=0;vowels[i]!='\0';i++){
		for(j=0;j<len;j++){
			if(vowels[i]==tolower(str[j])){
				count+=1;
			}
		}
	}
	printf("The no. of vowels in %s is %d\n",str,count);
	printf("The no.of consonants in %s is %d",str,len-count);
	return 0;
}
