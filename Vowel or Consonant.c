#include <stdio.h>

int main() {
    char a,i,arr[6]= {'a','e','i','0','u'};
    printf("Enter a letter");
    scanf(" %c",&a);
    for(i=0; i<=5; i++) {
        if(arr[i]==a) {
            printf("%c is a vowel",a);
            break;
        } else {
            printf("%c is a consonant",a);
            break;
        }
    }
    return 0;
}