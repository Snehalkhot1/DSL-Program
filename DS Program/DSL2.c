#include<stdio.h>
int main() {
    int A[10][10], B[10][10], C[10][10];
    int i, j, r, c, choice;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r,&c);
    printf("Enter elements of matrix A:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d ", &A[i][j]);
        }
    }
    printf("Enter elements of  matrix B:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d ", &B[i][j]);
        }
    }
    printf("Enter your choice:\n 1.Addition, 2.Substraction\n, 3.Multiplication\n");
    scanf("%d", &choice);
     switch(choice) {
        case 1: 
            for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%d", &C[i][j]);

                }
                printf("\n");
            }
            break;
            case 2:
            for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                    printf("%d", &C[i][j]);
                }
                printf("\n");
            }
            break;
            case 3:
            for(i=0; i<r; i++) {
                for(j=0; j<c; j++) {
                    C[i][j] = 0;
                    for(int k=0; k<c; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                    printf("%d", &C[i][j]);
                }
                printf("\n");
            }
     } }