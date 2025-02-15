#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("Enter the rows(n) and columns(m)");
    scanf("%d %d",&n,&m);
    printf("Multiplication table form 1 to n:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            printf("%d\t",i*j);
        }
        printf("\n");
    }
    return 0;
}            
            
            