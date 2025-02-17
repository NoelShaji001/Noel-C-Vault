#include<stdio.h>
int main() {
    int i,j,det=0;
    printf("This program is meant for finding determinant of 3×3 matrix only");
    int a[3][3];
    printf("\n\nPlease enter the elements: ");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix A is:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");

    }
    printf("\n");
    for(j=0; j<3; j++) {
        switch(j) {
        case 0:
            det+=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]));
            break;
        case 1:
            det-=a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
            break;
        case 2:
            det+=a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
            break;
        }
    }

    printf("The determinant of  the given matrix is: %d",det);
    return 0;
}
