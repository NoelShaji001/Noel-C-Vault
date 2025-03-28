#include<stdio.h>
int re_power(int,int);
int main(){
    int n,p;
    printf("Enter the base and exponent");
    scanf("%d %d",&n,&p);
    printf("The result =%d",re_power(n,p));
    return 0;
 }
 int re_power(int n,int p){
     if(p==0){
         return 1;
     }else{
         return n*re_power(n,p-1);
     }
}                