#include<stdio.h>
extern int z; 
void addNumbers(){
	static int y=5;
	printf("static y:%d\n",++y);
}	
int main(){
	int x,y;
	int z=22;
	register int k=20;
	 auto int n=10;
	 addNumbers(x);
	 addNumbers(x);
	 addNumbers(x);
	printf("extern z=%d\n",z);
	printf("auto n=%d\n",n);
	printf("register k=%d\n",k);	
	return 0;
} 
