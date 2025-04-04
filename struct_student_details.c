#include<stdio.h>
struct Student{
	char name[20];
	int roll_number;
	int m1,m2,m3;
	int total;
	float avg;
};
int main(){
	int n,i,m;
	printf("Enter the no of Students:");
	scanf("%d",&n);
	struct Student e[n];
	for(i=0;i<n;i++){
		printf("Please enter:");
		printf("\nName of the Student %d: ",i+1);
		scanf("%s",e[i].name);
		printf("\nRoll number of the student %d: ",i+1);
		scanf("%d",&e[i].roll_number);
		printf("\nEnter the 3 marks for each subject");
		scanf("%d %d %d",&e[i].m1,&e[i].m2,&e[i].m3);
		e[i].total=e[i].m1+e[i].m2+e[i].m3;
		e[i].avg=(float)e[i].total/3.00;
	}
	printf("____________STUDENT DETAILS____________");
	for(i=0;i<n;i++){
	printf("\n");
	printf("  Name : %s  |  Roll Number: %d  |  Mark1 : %d  |  Mark2 : %d  |  Mark3 : %d  |  Total : %d  |  Average : %f  |  ",e[i].name,e[i].roll_number,e[i].m1,e[i].m2,e[i].m3,e[i].total,e[i].avg);
	}
	return 0;
}   
