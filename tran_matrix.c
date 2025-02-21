#include <stdio.h>
int main(){
	int i,n,m,j;
	printf("Enter rows and columns for matrix A:\n");
	scanf("%d %d",&n,&m);
	int a[n][m],b[m][n];
	printf("Please enter elements for matrix A");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				b[i][j]=a[j][i];
			}
		}
		printf("Transpose of A is:\n");
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
