/* according to chatgpt,the following code is inefficient and not safe.*/


#include <stdio.h>
int main() {
    int i,j,len=0;
    char str1[30];
    printf("Enter a string:");
    scanf("%[^\n]",str1);
    for(i=0;str1[i]!='\0';i++);
    len=i;
    char str2[len];
    len=i-1;
    for(i=len,j=0;i>=0,j<=len;i--,j++){
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("\nThe reversed string is %s",str2);
    return 0;
}        
    
   