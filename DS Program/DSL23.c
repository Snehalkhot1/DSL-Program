#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int i, j, k, r, c, choice;
    char cont;   

    
        printf("Enter number of rows and columns: ");
        scanf("%d %d", &r, &c);

        printf("Enter elements of matrix A:\n");
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter elements of matrix B:\n");
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                scanf("%d", &B[i][j]);
            }
        }
        do {
        printf("Enter your choice:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("The Addition of the matrix is:\n");
                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        C[i][j] = A[i][j] + B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2: 
                printf("The Subtraction of the matrix is:\n");
                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        C[i][j] = A[i][j] - B[i][j];
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: 
                printf("The Multiplication of the matrix is:\n");
                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        C[i][j] = 0;
                        for(k = 0; k < c; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid choice!\n");
        }
        printf("Do you want to continue (y/n): ");
        scanf(" %c", &cont);  

    } while(cont == 'y' || cont == 'Y');

    return 0;
}