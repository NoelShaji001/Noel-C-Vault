#include<stdio.h>
int main(){   
    int a,b,c,result;
    printf("Enter the angles of your triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a&&b&&c>0){
        if(a||b||c!=0){
            result=a+b+c;
            if(result==180){
                printf("The triangle is possible");
            }else{   
                printf("The triangle is not possible");
            }
        }else{
            printf("The triangle is not possible" );
        }
    }else{
        printf("Invalid attempt");
    }    
    return 0;
}        