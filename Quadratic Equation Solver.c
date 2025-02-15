#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,b1,a1;
    float root1,root2,root3,D,C;
    printf("Enter the values a,b,c correspondingly");
    scanf("%d %d %d",&a,&b,&c);
    b1=-(b);
    a1=2*a;
    C=(float)((b*b)-(4*a*c));
    D=sqrt((b*b)-(4*a*c));
    if(C>0){
        root1=(-b+D)/(2*a);
        root2=(-b-D)/(2*a);
        printf("The answers are %f and %f",root1,root2);
    }else if(C==0){
        root3=(-b/(2*a));
        printf("The answer is %f",root3);
    }else{
        printf("%d ± (√%d/%d)*i",b1/a1,(int)-C,a1);
    }
    return 0;
}        
        