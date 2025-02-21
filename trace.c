#include <stdio.h>
int main(){
	int i,n,m,j,sum=0;
	printf("Enter rows and columns for matrix A:\n");
	scanf("%d %d",&n,&m);
	int a[n][m];
	printf("Please enter elements for matrix A");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(i==j){
					sum+=a[i][j];
				}
			}
		}
		printf("sum=%d\n",sum);
		
		return 0;
	}
