#include <stdio.h>
 struct student{
	char name[20];
	int roll_no;
	float age;
}s1;
 union book{
	char name[20];
	int pages;
	float price;
}u1;
int main(){
	printf("size of structure=%ld",sizeof(s1));
	printf("size of union=%ld",sizeof(u1));
	return 0;
}
		
	 
