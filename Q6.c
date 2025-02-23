// Write a program to perform matrix multiplication

#include<stdio.h>
#define ROWS 10
#define COLS 10

int main(void) {

    int mat1[ROWS][COLS], mat2[ROWS][COLS], res[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat1[i][j] = 0;
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat2[i][j] = 0;
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            res[i][j] = 0;
        }
    }

    int row1, col1, row2, col2;
    printf("Enter the numbers of rows and columns for matrix 1: ");
    scanf("%d%d", &row1,&col1);
    printf("Enter the numbers of rows and columns for matrix 2: ");
    scanf("%d%d", &row2, &col2);
    if (col2 != row1) {
        printf("Matrix multiplication not possible");
    }
    else {
        printf("Enter the values of matrix 1: \n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                printf("Enter value: ");
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter the values of matrix 2: \n");
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                printf("Enter value: ");
                scanf("%d", &mat2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                for (int k = 0; k < row2; k++) {
                    res[i][j] += mat1[i][k] *  mat2[k][j];   
                }
            }
        }

        printf("Resultant matrix\n");
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}