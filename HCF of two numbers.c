/* according to chatgpt,the following code is inefficient and not safe.*/


#include <stdio.h>
int main() {
    int num1,num2,i,num3,num4,big=0,small=0;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    num3=num1;
    num4=num2;
    if(num3<0){
        num3= -num3;
    }
    if(num4<0){
        num4= -num4; 
    }       
    if(num3<num4){
        small=num3;
    }else{
        small=num4;
    }
    for(i=1;i<small;i++){
        if(num3%i==0&&num4%i==0){
            if(i>big){
                big=i;
            }
        }
    }
    printf("The HCF of %d and % d is %d",num1,num2,big);
    return 0;
}    
            
    
    