#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,l,count=0,n,s,r;
    printf("Enter the lobe size");
    scanf("%d",&n);
    //lobe part
    for(i=n-sqrt(n);i<n;i++){
        for(j=n-i;j>1;j--){
            printf(" ");
            if(i==n-1){
            count+=1;
            }
        }
        for(j=0;j<(2*i)-1;j++){
            printf("*");
            if(i==n-1){
            count+=1;
            }
            
        }
        for(j=0;j<n-i;j++){
            printf(" ");
            if(i==n-1){
            count+=1;
            }
        }
        for(j=n-i;j>1;j--){
            printf(" ");
            if(i==n-1){
            count+=1;
            }
        }
        for(j=0;j<(2*i)-1;j++){
            printf("*");
            if(i==n-1){
            count+=1;
            }
            
        }
        printf("\n");
   }
   //triangle part
   l=(count/2)+1;
   for(s=(count/2)+1;s>=1;s--){
        for(r=1;r<=l-s;r++){
            printf(" ");
        }
        for(k=1;k<=count;k++){
            printf("*");
        }
        count-=2;
        printf("\n");
    }
    return 0;
}
