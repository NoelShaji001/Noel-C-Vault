#include <stdio.h>
int main(){
	int num1,num2,result;
	char c ;
	printf("Enter two numbers");
	scanf("%d %d",&num1,&num2);
	printf("Enter the operator");
	scanf(" %c",&c);
	switch(c){
		case '+': 
			printf("The sum  is %d",num1+num2);
			break;
		case '-':
			printf("The difference is %d",num1-num2);
			break;
		case '*': 
			printf("The product is %d",num1*num2);
			break;
		case '/': 
			if(num2!=0){
	                	printf("The quotient is %d",num1/num2);
	                break;
	        	}else{
	                	printf("Not defined");
			}
			break;
		case '%': 
			result=num1%num2;
			printf("The remainder  is %d",result);
			break;
		default:
			printf("Invalid Number");
			break;
		}
	return 0;
}
		
