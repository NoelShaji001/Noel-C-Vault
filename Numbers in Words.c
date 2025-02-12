#include<stdio.h>
int main(){   
    int num,modN,rev=0,modR;
    printf("enter a number");
    scanf("%d",&num);
    for(;num!=0;){
        modN=num%10;
        rev=rev*10+modN;
        num=num/10;
    }
    for(;rev!=0;){ 
        modR=rev%10;
        switch(modR){
            case 0:printf("Zero ");
                   break;
            case 1:printf("One ");
                  break;
            case 2:printf("Two ");
                   break;
            case 3:printf("Three ");
                   break;
            case 4:printf("Four ");
                   break;
            case 5:printf("Five ");
                   break;
            case 6:printf("Six ");
                   break;
            case 7:printf("Seven ");
                   break;
            case 8:printf("Eight ");
                   break;
            case 9:printf("Nine ");
                   break;
            default:printf("invalid ");
                    break;
        }
        rev/=10;            
        
    }
    return 0;
}        