#include <stdio.h>
#include <math.h>
int main(){
   int i,n,l,modN,sum=0,temp,nes,count=0;
   printf("number");
   scanf("%d",&n);
   temp=n;
   nes=n;
   for(;nes!=0;){
       nes/=10;
       count+=1;
   }    
   for(;n!=0;){
      modN=n%10;
      sum+=pow(modN,count);
      n=n/10;
   }
   printf("sum=%d",sum);
   if(sum==temp){
       printf("The number is armstrong number");
   }else{
       printf("The number is not armstrong number");
   }
   return 0;
}