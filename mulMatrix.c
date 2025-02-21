#include <stdio.h>
int main(){
	int i,n,m,j,p,q;
	printf("Enter rows and columns for matrix A:\n");
	scanf("%d %d",&n,&m);
	int a[n][m],c[n][m];
	printf("Please enter elements for matrix A");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter rows and columns for matrix B\n");
	scanf("%d %d",&p,&q);
	int b[p][q];
	if(m==p){
		printf("Please enter elements for matrix B\n");
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				scanf("%d",&b[i][j]);
			}
		}
		printf("Matrix A is:\n");
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("Matrix B is:\n");
		for(i=0;i<p;i++){
			for(j=0;j<q;j++){
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<n;i++){
			for(j=0;j<q;j++){
			c[i][j]+=a[i][j]*b[j][i];
			}
		}
		printf("The matrix product is:\n");
		for(i=0;i<n;i++){
			for(j=0;j<q;j++){
			printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}else{
		printf("The matrix isn't possible\n");
	}
	return 0;
}
