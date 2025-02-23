#include <stdio.h>
int main() {
    int i,count;
    char a[100];
    printf("\nEnter first sentence: ");
    scanf("\n %[^\n]",a);
    printf("\noriginal string= %s\n",a);
    for(i=0;a[i]!='\0';i++);
    count=i;
    char b[count];
    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("\nCopied string= %s",b);
    return 0;
}