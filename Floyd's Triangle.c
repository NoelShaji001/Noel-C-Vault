#include<stdio.h>
int main(){   
    int i,n,j,k;
    printf("enter the rows");
    scanf("%d",&n);
    for(i=1,k=0;i<n,k<n;i++,k++){
        for(j=((i*(i+1))/2)-k;j<=((i*(i+1))/2);j++){
            printf("%d ",j);
        }printf("\n");
    }
    return 0;
}        