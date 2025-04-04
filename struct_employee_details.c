#include<stdio.h>
struct Employee{
	char name[20];
	int ID;
	int salary;
};
int main(){
	int n,i;
	printf("Enter the no of employees:");
	scanf("%d",&n);
	struct Employee e[n];
	for(i=0;i<n;i++){
		printf("Please enter:");
		printf("\nName of the employee %d: ",i+1);
		scanf("%s",e[i].name);
		printf("\nID of the employee: ");
		scanf("%d",&e[i].ID);
		printf("\nSalary of the employee:");
		scanf("%d",&e[i].salary);
	}
	printf("____________EMPLOYEE DETAILS____________");
	for(i=0;i<n;i++){
	printf("\n");
	printf("Name : %s     | ID : %d    |  Salary : %d  ",e[i].name,e[i].ID,e[i].salary);
	}
	return 0;
}   
		
