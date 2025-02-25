#include<stdio.h>
#include<string.h>
	int main (){
	char str[50];
	int len,i,j;
	printf("Enter a string:\n");
	scanf("%[^\n]",str);
	len=strlen(str);
	for(i=0;i!=len;i++){
		int count=1;
		if(str[i]!='\0'){
			for(j=i+1;j<len;j++){
				if(str[i]==str[j]){
				count++;
				str[j]='\0';
			}
			}
		printf("The count of %c : %d\n",str[i],count);
		}
		
	}
	return 0;
}
