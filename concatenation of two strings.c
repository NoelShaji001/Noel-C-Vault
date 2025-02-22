/* according to chatgpt,the following code is inefficient and unsafe.*/


#include <stdio.h>

int main() {
    int i,j;
    char s1[20],s2[20];
    printf("\nEnter first sentence: ");
    scanf("\n %[^\n]", s1);
    printf("\nEnter second sentence: ");
    scanf("\n %[^\n]",s2);
    for(i=0;s1[i]!='\0';i++);
    s1[i]=' ';
    i++;
    for(j=0;s2[j]!='\0';j++){
        s1[i+j]=s2[j];
    }
    s1[i+j]='\0'; 
    printf("\nconcatenated string is: %s",s1);   
    return 0;
}