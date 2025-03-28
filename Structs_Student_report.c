#include<stdio.h>
#include<string.h>
struct Students{
    char name[30];
    int mark1,mark2,mark3;
    float average;
    char grade;
 }; 
int main(){
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct Students s[n];
        for(i=0;i<n;i++){
            printf("Enter the name of student:");
            scanf("\n%[^\n]",s[i].name);
            printf("\nEnter the three marks for %s",s[i].name);
            scanf("%d %d %d",&s[i].mark1,&s[i].mark2,&s[i].mark3);
            s[i].average=(s[i].mark1+s[i].mark2+s[i].mark3)/3.00;
            if (s[i].average>=90)
                s[i].grade='A';
            else if (s[i].average>=80)
                s[i].grade='B';
            else if (s[i].average>=70)
                s[i].grade='C';
            else if (s[i].average>=60)
                s[i].grade='D';
            else if (s[i].average>=50)
                s[i].grade='E';
            else
                s[i].grade='F';
            
        }
    printf("______STUDENTS RESULTS_______\n");    
     for(i=0;i<n;i++){
         printf("Name:%s | Average:%f | Grade:%c",s[i].name,s[i].average,s[i].grade);
         printf("\n");
     }
     return 0;
 }        
         
         
        
        